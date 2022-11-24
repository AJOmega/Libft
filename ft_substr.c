/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:41:18 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/11/23 16:15:58 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*cpy;

	cpy = NULL;
	if (!str)
		return (0);
	i = start;
	j = 0;
	if (start < ft_strlen(str) && len <= ft_strlen(str) - start)
		cpy = (char *) malloc(len + 1);
	else if (len > ft_strlen(str) - start && start < ft_strlen(str))
		cpy = (char *) malloc(ft_strlen(str) - start + 1);
	else
		cpy = malloc (sizeof(char) * 1);
	if (!cpy)
		return (0);
	while (i < ft_strlen(str) && j < len)
	{
		cpy[j] = str[i];
		i++;
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
