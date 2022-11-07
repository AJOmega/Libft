/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:23:14 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/11/04 17:23:14 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	join = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * 1);
	if (!join)
		return (0);
	while (s1[j])
	{
		join[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return (join);
}

int	main(void)
{
	printf("%s\n", ft_strjoin("Hello", " World"));
}