#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
size_t	ft_strlen(const char *s);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void ft_bzero(void *s, size_t n);
char *ft_strtrim(char const *s1, char const *set);
char *ft_strchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strdup(const char *s1);
void *ft_calloc(size_t count, size_t size);

typedef struct s_list
{
    void			*content;
    struct s_list	*next;
}t_list;

t_list *ft_lstnew(void *content);
#endif