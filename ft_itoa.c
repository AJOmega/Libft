/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabreu-d <jabreu-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:41:26 by jabreu-d          #+#    #+#             */
/*   Updated: 2022/11/08 19:41:26 by jabreu-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    char    *str;
    int        nbr;
    int        i;
    int     sign;
    int     max;
    if (!n)
    {
        return (0);
    }
    if (n < 0)
    {
      i = 2;
      n *= -1;
      sign = 1;
    }
    else
    {
      i = 1;
      sign = 0;
    }
    nbr = n;
    while (nbr > 9)
    {
        nbr = nbr / 10;
        i++;
    }
    max = i - 1;
    str = malloc(i + 1 * 1);
	if (!str)
		return (0);
    if (sign == 1)
      str[0] = '-';
    i = 0;
    i = max;
    while (n > 9)
    {
      str[i] = n % 10 + '0';
      n /= 10;
      i--;
    }
    str[i] = n + '0';
    str[max + 1] = '\0';
    return (str);
}

/*int main(void)
{
	char *i1 = ft_itoa(-623);
	char *i2 = ft_itoa(156);
	char *i3 = ft_itoa(-0);

	printf("%d\n", strcmp(i1, -623));
	printf("%d\n", strcmp(i2, 156));
	printf("%d\n", strcmp(i3, -0));
  printf("%s\n",ft_itoa(-100));
}*/