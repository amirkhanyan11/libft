#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <libc.h>
#include <ctype.h>
#include <string.h>

// is_smth.h
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int ft_isprint(int c);

// ft_string.h
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_toupper(int c);
int 	ft_tolower(int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);



#endif // LIBFT_H
