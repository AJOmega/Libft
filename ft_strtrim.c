/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:14:08 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/11/04 19:14:08 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;
	int		s1len;
	int		setlen;
	int	left;
	int	right;

	if (!s1 || !set || (ft_strlen(set) > ft_strlen(s1)))
		return (0);
	trim = malloc((ft_strlen(s1) + 1) * 1);
	if (!trim)
		return (0);
	s1len = ft_strlen(s1);
	setlen = ft_strlen(set);
	i = setlen;
	while (i >= 0)
	{
		if (s1[i] != set[i])
			break;
		i--;
	}
	if (i < 0)
		left = 1;
	i = s1len - setlen;
	j = 0;
	while (i <= s1len)
	{
		if (s1[i] != set[j])
			break;
		i++;
		j++;
	}
	if (i > s1len)
		right = 1;
	if (right == 0 && left == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		//printf("%d - ", i);
		if (i >= setlen && i < (s1len - setlen) && left == 1)
		{
			trim[j] = s1[i];
			//printf("%s\n", trim);
			j++;
		}
		else if (i >= setlen && i < (s1len - setlen) && right == 1)
		{
			trim[j] = s1[i];
			//printf("%s\n", trim);
			j++;
		}
		i++;
		trim[j] = '\0';
		//printf("\n");
	}
	return (trim);
}

/*int	main(void)
{
	printf("%s\n",ft_strtrim("Helloab  ", "ab"));
}*/