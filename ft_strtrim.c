/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:21:10 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/11/07 17:47:24 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;

	if (!s1 || !set)
		return (0);
	//trim = malloc((ft_strlen(s1) + 1) * 1);
	if (!trim)
		return (0);
	i = 0;
	j = 0;
	while (set[j] && s1[i])
	{
				
	}
}
/*int	main(void)
{
	printf("%s\n",ft_strtrim("Helloab  ", "ab"));
}*/