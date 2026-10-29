/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:23:30 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/29 21:58:45 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int counter(int n)
{
	long nb;
	int count;

	nb = n;
	count = 0;
	if (n <= 0)
	{
		count = 1;
		nb = -nb;
	}
	while (nb >= 1)
	{
		nb = nb/10;
		count++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	char *num;
	int i;
	int size = counter(n);
	
	i = size - 1;
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return (ft_strdup("0"));
	num = malloc(size + 1);
	if (!num)
		return (NULL);
	if (n < 0)
	{
		num[0] = '-';
		n = -n;
	}
	while (n)
	{
		num[i--] = n % 10 + '0';
		n = n / 10;
	}
	num[size] = '\0';
	return (num);
}

/* int main()
{
	char *num = ft_itoi(-1234);
	printf("%s\n", num);
	return (0);
} */


/* int	main(void)
{
	printf("ft: %s | expected: %s\n", ft_itoa(0), "0");
	printf("ft: %s | expected: %s\n", ft_itoa(-0), "0");
	printf("ft: %s | expected: %s\n", ft_itoa(1), "1");
	printf("ft: %s | expected: %s\n", ft_itoa(-1), "-1");
	printf("ft: %s | expected: %s\n", ft_itoa(42), "42");
	printf("ft: %s | expected: %s\n", ft_itoa(+42), "42");
	printf("ft: %s | expected: %s\n", ft_itoa(-42), "-42");
	printf("ft: %s | expected: %s\n", ft_itoa(2147483647), "2147483647");
	printf("ft: %s | expected: %s\n", ft_itoa(-2147483648), "-2147483648");
	printf("ft: %s | expected: %s\n", ft_itoa(2147483646), "2147483646");
	printf("ft: %s | expected: %s\n", ft_itoa(-2147483647), "-2147483647");

	return (0);
} */
