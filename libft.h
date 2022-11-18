/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:18:46 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/11/18 15:58:45 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

/**
 * The function ft_isalpha() checks if the passed character is an alphabet or not
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is a letter, 0 if not.
 */
int		ft_isalpha(int c);
/**
 * The function ft_isdigit() returns 1 
 * if the passed character is a digit, and 0 if it is not
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is a digit, 0 if not.
 */
int		ft_isdigit(int c);
/**
 * If the character is a number or a letter, return 1, otherwise return 0
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is alphanumeric, 0 if not.
 */
int		ft_isalnum(int c);
/**
 * The function ft_isascii() checks if the passed character is an ASCII character
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if c is between 0 and 127, 0 otherwise.
 */
int		ft_isascii(int c);
/**
 * The function ft_isprint() checks if the passed character is printable
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if c is a printable character, 0 otherwise.
 */
int		ft_isprint(int c);
/**
 * It returns the length of a string.
 * 
 * @param str This is the string that we are going to find the length of.
 * 
 * @return The length of the string.
 */
size_t	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t len);
/**
 * Ft_bzero() takes a pointer to a memory area and a size in bytes 
 * and sets all bytes of the memory
 * area to zero
 * 
 * @param str This is the pointer to the block of memory to fill.
 * @param n The number of bytes to be set to zero.
 */
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/**
 * It takes a string, and returns the integer value of that string
 * 
 * @param str The string to be converted.
 * 
 * @return the integer value of the string.
 */
int		ft_atoi(const char *str);
/**
 * It allocates memory for an array of nmemb elements of 
 * size bytes each and returns a pointer to the
 * allocated memory. The memory is set to zero.
 * 
 * @param nmemb The number of elements to be allocated.
 * @param size The size of the memory block, in bytes.
 * 
 * @return A pointer to the allocated memory.
 */
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
/**
 * Iterate through the string s, applying the function 
 * f to each character, passing the index of the
 * character as the first argument
 * 
 * @param s The string to iterate through.
 * @param f The function to be applied to each character of the string.
 * 
 * @return Nothing.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_itoa(int n);
/**
 * Ft_strmapi() applies the function f to each character 
 * of the string passed as argument by giving its
 * index as first argument to create a "fresh" 
 * new string (with malloc(3)) resulting from the
 * successive applications of f.
 * 
 * @param s The string to be iterated over.
 * @param f The function to be applied to each character of s.
 * 
 * @return A pointer to a new string.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif