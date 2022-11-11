/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:18:11 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/11/11 18:51:27 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_words(char *str, char c)
{
	size_t	i;
	size_t	p;

	i = 0;
	p = 0;
	while (str[i])
	{
		if (str[i] != c)
			i++;
		else
			p++;
	}
	return (p * i);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	size_t	p;
	size_t	i;
	char	**sp;

	j = 0;
	p = 0;
	i = 0;
	//sp = (char *)malloc(ft_count_words(s, c + 1) * sizeof(char *));
	sp = malloc(1000 * sizeof(char *));
	if (!sp)
		return (NULL);
	sp[0] = malloc(1000);
	while (s[j])
	{
		if (s[j] == c)
		{
			sp[p][i] = '\0';
			p++;
			sp[p] = malloc(1000);
			i = 0;
		}
		sp[p][i] = s[j];
		i++;
		j++;
	}
	sp[p] = NULL;
	free(sp);
	return (sp);
}

int	main(void)
{
	char s[] = "Hello World Pao com manteiga";
	char c = ' ';
	
	printf("%s\n",(s, c));
}