/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:16:08 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/11/04 15:16:08 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char	*cpy;

	i = start;
	j = 0;
	if (!str || !(cpy = (char *) malloc(len + 1)))
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
