#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

//part 1

void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, int n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove (void *dest, const void *src, size_t n);
void			*memchr(const void *s, int c, size_t n);
int				memcmp(const void *s1, const void *s2, size_t n);
int				ft_strlen(char *str);
char			*ft_strdup(char *src);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*strchr (const char *s, int c);
char			*strrchr (const char *s, int c);
char			*ft_strstr(char *str, char *to_find);
char			*strnstr(const char *s1, const char *s2, size_t len);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_atoi(char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				tolower(int c);

//part 2

void			*ft_memalloc(size_t size);
#endif
