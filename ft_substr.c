/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:41:18 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/11/14 16:47:29 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*cpy;

	i = start;
	j = 0;
	cpy = (char *) malloc(len + 1);
	if (!str || !cpy)
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
