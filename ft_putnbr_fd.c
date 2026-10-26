/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 19:54:25 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/19 21:41:56 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{	write(fd, "-2147483648\n", 12);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n/10, fd);
	char c = n % 10 + '0';
	write(fd, &c, 1);
}

int main()
{
	ft_putnbr_fd(0, 1);
	ft_putnbr_fd(11, 1);
	ft_putnbr_fd(200, 1);
	ft_putnbr_fd(-99, 1);
	ft_putnbr_fd(2147483647, 1);
	return (0);
}