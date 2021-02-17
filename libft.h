#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int       ft_isprint(int c);
size_t		ft_strlen(const char *str);
int	    	ft_tolower(int c);
int		    ft_toupper(int c);
int	    	ft_isascii(int c);
int	    	ft_isalnum(int c);
int		    ft_isdigit(int c);
int	    	ft_isalpha(int c);
int	      ft_atoi(const char *str);
int		    ft_isprint(int c);
char    	*ft_strjoin(char const *s1, char const *s2);
char	    *ft_strnstr(const char *find_in, const char *to_find, size_t lenght);
void	    *ft_memset(void *str, int c, size_t n);
void    	*ft_memcpy(void *dst, const void *src, size_t n);

#endif // LIBFT_H