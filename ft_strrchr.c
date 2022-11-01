/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:53:32 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/10/29 12:53:32 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int i = 0;
	while (*s)
	{
		printf("i: %d | s: %s\n", i, s);
		s++;
		i++;
	}
	while (i >= 0)
	{
		printf("i: %d | s: %s\n", i, s);
		if (*s == c)
		{
			return ((char *)s);
		}
		s--;
		i--;
	}
		
	return (0);
}

/*int main () {
   int len;
   const char str[] = "http://www.google.pt";
   const char ch = '.';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/