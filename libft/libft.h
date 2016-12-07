#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>



//1
void * ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void 	*ft_memmove(void *dst, const void *src, size_t len);
int        ft_strlen(char *str);
char *ft_strdup(const char *str);
char * ft_strcpy(char * dst, const char * src);
char *ft_strncpy(char * dst, const char * src, size_t len);
char * ft_strcat(char *restrict s1, const char *restrict s2);
char * ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
int	ft_isalpha(int c);
int     ft_isdigit(int c);
void *  ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char * ft_strchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strrchr(const char *s, int c);
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t size);
//char    *ft_strstr(const char *big, const char *little);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_atoi(const char *str);
int     ft_isprint(int c);
int     ft_tolower(int c);
int     ft_toupper(int c);
int     ft_isascii(int c);
int     ft_isalnum(int c);

//2
char * ft_itoa(int n);
void ft_putchar(char c);
void ft_striteri(char *s, void (*f)(unsigned int, char *));
void ft_strclr(char *s);
void	putnbr(int n);
void ft_putstr(char const *str);
int        ft_strlen(char *str);
void	*ft_memalloc(size_t size);
char	*ft_strnew(size_t size);
void ft_putnbr_fd(int n, int fd);
void ft_putchar_fd(char c, int fd);
void ft_putnbr(int n);
void ft_putstr_fd(char const *s, int fd);
char ** ft_strsplit(char const *s, char c);

//extra
char    *ft_remove_g(char *s, char c);

#endif
