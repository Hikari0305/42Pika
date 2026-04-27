#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	ft_memchr(const void *arr, int c, size_t n);
int		ft_memcmp(const void *array_1, const void *array_2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(char *haystack, char *needle);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_strlen(char *a);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(char *s1, char *s2, unsigned int n);
char	*ft_strrchr(char *s, int c);
int		ft_tolower(int a);
int		ft_toupper(int a);


typedef struct s_list
{
    void *content;
    struct s_list *next;
}t_list;
#endif