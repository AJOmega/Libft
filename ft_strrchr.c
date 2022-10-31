/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:52:25 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/10/31 12:48:09 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	while (str[i] != '\0' && c != str[i])
		i--;
	if (c == str[i])
		return ((char *)&str[i]);
	return (0);
}

int	main(void)
{
	printf("%s\n", ft_strrchr("Hello World", 'W'));
}