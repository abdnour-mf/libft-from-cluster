/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:44:37 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/16 18:51:29 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    size_t i;
    int result;
    int sign;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i++] == '-')
            sign = -1;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}


 #include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(void)
{
	char str[] = "2147483647";
	char str2[] = "-214748364822";
	char str1[] = "214748364844";

	printf("%d \n",ft_atoi(str));
	printf("%d \n",atoi(str));
	printf("%d \n",ft_atoi(str2));
	printf("%d \n",atoi(str2));
	printf("%d \n",ft_atoi(str1));
	printf("%d \n",atoi(str1));

	return 0;
}
	
	/* printf("1. Empty:             ft: %d | real: %d\n",
		ft_atoi(""), atoi(""));
	printf("2. Minus only:        ft: %d | real: %d\n",
		ft_atoi("-"), atoi("-"));
	printf("3. Plus only:         ft: %d | real: %d\n",
		ft_atoi("+"), atoi("+"));
	printf("4. Zero:              ft: %d | real: %d\n",
		ft_atoi("0"), atoi("0"));
	printf("5. Negative number:   ft: %d | real: %d\n",
		ft_atoi("-42"), atoi("-42"));
	printf("6. Positive sign:     ft: %d | real: %d\n",
		ft_atoi("+42"), atoi("+42"));

	printf("7. Letter:            ft: %d | real: %d\n",
		ft_atoi("abc"), atoi("abc"));
	printf("8. Symbol:            ft: %d | real: %d\n",
		ft_atoi("!"), atoi("!"));
	printf("9. Number then text:  ft: %d | real: %d\n",
		ft_atoi("123abc"), atoi("123abc"));
	printf("10. Text then number: ft: %d | real: %d\n",
		ft_atoi("abc123"), atoi("abc123"));

	printf("11. Leading spaces:   ft: %d | real: %d\n",
		ft_atoi("   42"), atoi("   42"));
	printf("12. Leading tab:      ft: %d | real: %d\n",
		ft_atoi("\t42"), atoi("\t42"));
	printf("13. Leading newline:  ft: %d | real: %d\n",
		ft_atoi("\n42"), atoi("\n42"));
	printf("14. Spaces and sign:  ft: %d | real: %d\n",
		ft_atoi("  -42"), atoi("  -42"));
	printf("15. Trailing spaces:  ft: %d | real: %d\n",
		ft_atoi("42   "), atoi("42   "));

	printf("16. Double minus:    ft: %d | real: %d\n",
		ft_atoi("--42"), atoi("--42"));
	printf("17. Double plus:     ft: %d | real: %d\n",
		ft_atoi("++42"), atoi("++42"));
	printf("18. Mixed signs:     ft: %d | real: %d\n",
		ft_atoi("+-42"), atoi("+-42"));
	printf("19. Sign after space: ft: %d | real: %d\n",
		ft_atoi(" - 42"), atoi(" - 42"));

	printf("20. Leading zeros:   ft: %d | real: %d\n",
		ft_atoi("000008"), atoi("000008"));
	printf("21. Negative zeros:  ft: %d | real: %d\n",
		ft_atoi("-000008"), atoi("-000008"));

	printf("22. INT_MAX:         ft: %d | real: %d\n",
		ft_atoi("2147483647"), atoi("2147483647"));
	printf("23. INT_MIN:         ft: %d | real: %d\n",
		ft_atoi("-2147483648"), atoi("-2147483648"));
	printf("24. INT_MAX - 1:     ft: %d | real: %d\n",
		ft_atoi("2147483646"), atoi("2147483646"));
	printf("25. INT_MIN + 1:     ft: %d | real: %d\n",
		ft_atoi("-2147483647"), atoi("-2147483647"));

	printf("26. Digits then sign: ft: %d | real: %d\n",
		ft_atoi("42+10"), atoi("42+10"));
	printf("27. Spaces after sign: ft: %d | real: %d\n",
		ft_atoi("+ 42"), atoi("+ 42"));
 



 int main()
{
    char s[] = "1337";
    printf("%d\n", ft_atoi(s));
    printf("%d\n", atoi(s));
    return 0;
} */