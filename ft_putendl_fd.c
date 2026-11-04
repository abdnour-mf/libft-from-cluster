/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 19:50:31 by amfarrej          #+#    #+#             */
/*   Updated: 2026/11/04 22:52:25 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/* #include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd = open("file.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (fd == -1)
		printf("error");
	else 
		printf("okay");
	char *name = "kkjj";
	ft_putendl_fd(name, fd);
} */

// open() system call
// return -1 if there is failure 
// return fd 
// open(filename, oflags, permissions)
// close()
//O_TRUNC
