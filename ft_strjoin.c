/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:11:24 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/11/23 15:31:50 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	join = NULL;
	if (!s1 || !s2)
		return (0);
	join = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * 1);
	if (!join)
		return (0);
	i = 0;
	j = 0;
	while (s1[j])
	{
		join[i++] = s1[j++];
	}
	j = 0;
	while (s2[j])
		join[i++] = s2[j++];
	join[i] = '\0';
	return (join);
}

/*int	main(void)
{
	printf("%s\n", ft_strjoin("Hello", " World"));
}*/	