/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:23:10 by lvieira           #+#    #+#             */
/*   Updated: 2021/02/24 18:00:23 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int         ft_isprint(int c);
size_t		ft_strlen(const char *str);
int	    	ft_tolower(int c);
int		    ft_toupper(int c);
int	    	ft_isascii(int c);
int	    	ft_isalnum(int c);
int		    ft_isdigit(int c);
int	    	ft_isalpha(int c);
int	        ft_atoi(const char *str);
void	    *ft_memccpy(void *dst, const void *src, int c, size_t n);
int		    ft_isprint(int c);
char    	*ft_strjoin(char const *s1, char const *s2);
char	    *ft_strnstr(const char *find_in, const char *to_find, size_t lenght);
void	    *ft_memset(void *str, int c, size_t n);
void    	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	    ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	    *ft_strchr(const char *s, int c);
size_t	    ft_strlcat(char *dst, const char *src, size_t dstsize);
void	    ft_bzero(void *s, size_t n);
int	        ft_isascii(int c);
void	    *ft_memchr(const void *s, int c, size_t n);
int	        ft_memcmp(const void *s1, const void *s2, size_t n);
void    	*ft_memmove(void *dst, const void *src, size_t len);
void	    ft_putchar_fd(char c, int fd);
char    	*ft_strdup(const char *s1);
int	        ft_strncmp(const char *str1, const char *str2, size_t n);
char	    *ft_strrchr(const char *s, int c);
char    	*ft_substr(char const *s, unsigned int start, size_t len);
void	    ft_putstr_fd(char *s, int fd);
void	    *ft_calloc(size_t count, size_t size);
char		*ft_strtrim(char const *s1, char const *set);



#endif // LIBFT_H
