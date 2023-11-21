/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h   		                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:20:55 by lgaume            #+#    #+#             */
/*   Updated: 2023/10/09 12:20:59 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// FT_ALLOC
void		ft_bzero(void *str, size_t n);
void		*ft_calloc(size_t count, size_t size);

// FT_ATOI
int			ft_atoi(const char *str);
char		*ft_itoa(int n);
char		*ft_unsigned_itoa(unsigned int n);

// FT_IS
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);
int			is_sign(char c);

// FT_LST
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *n);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *n);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// FT_MEM
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);

// FT_PRINTF
int			ft_printf(const char *str, ...);
int			ft_print_char(char c);
int			ft_print_str(char *str);
int			ft_print_nbr(int n);
int			ft_print_unsigned(unsigned int n);
int			ft_print_hex(unsigned int num, const char format);
int			ft_print_ptr(unsigned long long ptr);
int			ft_print_stderr(char *s);

// FT_PUT
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

// FT_STR
size_t		ft_strlen(const char *str);
char		*ft_strchr(const char *s, int c);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strncat(char *dst, const char *src, size_t n);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
char		*ft_strdup(const char *s1);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_strtrim(const char *s1, const char *set);
char		*ft_substr(const char *s, unsigned int start, size_t len);
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strnew(size_t size);

// FT_TO
int			ft_toupper(int c);
int			ft_tolower(int c);

// FT_UTILS
char		**ft_split(const char *s, char c);

//GNL
char		*get_next_line(int fd);

#endif
