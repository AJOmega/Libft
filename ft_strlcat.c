/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:27:01 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/10/31 17:53:01 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && len + 1 < size)
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}

/*int	main(void)
{
	char src[] = "World";
	char dest[15] = "Hello";
	ft_strlcat(dest, src, 11);
}*/
