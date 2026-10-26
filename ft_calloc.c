/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:43:33 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/20 16:45:42 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *s = (unsigned char *)b;
	size_t i;

	i = 0;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

void *ft_calloc(size_t count, size_t size)
{
    char *ptr;

    if (size && count > (SIZE_MAX / size))
        return (NULL);
    if (!(ptr = malloc(count * size)))
        return (NULL);

    ft_bzero(ptr, count * size);
    
    return (ptr);
}

/* int main()
{
    int *a;
    int *A; 
    void *b;
    void *B;

    //condition ? value_if_true : value_if_false

     a = ft_calloc(5, sizeof(int));
    printf ("test 1 : %s \n",
        a && a[0] == 0 && a[4] == 0 ? "ok" : "fail");
    free(a);
    
    a = ft_calloc(0, sizeof(int));
    printf ("test 2 : %s \n",
        a == NULL ? "NULL" : "Non-NULL");
    free(a);
    A = calloc(0, sizeof(int));
    printf ("test 2 : %s \n",
        a == NULL ? "NULL" : "Non-NULL");
    free(a); 

    
    b = ft_calloc(SIZE_MAX , 2);
    printf("Overflow: %s\n", b == NULL ? "OK(return NULL)" : "FAIL");
    free(b);
    B = calloc(SIZE_MAX , 2);
    printf("Overflow: %s\n", B == NULL ? "OK(return NULL)" : "FAIL");
    free(B);

    b = ft_calloc(SIZE_MAX / 2, 2);
    printf("Boundary: %s\n", b == NULL ? "NULL" : "Allocated");
    free(b);
    B = calloc(SIZE_MAX / 2, 2);
    printf("Boundary: %s\n", B == NULL ? "NULL" : "Allocated");
    free(B);
    return (0);
} */