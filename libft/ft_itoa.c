/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 00:38:44 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/09 21:35:39 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*tmp;
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		j++;
	while (ft_topositif(n) / i >= 10)
		i = i * 10;
	if (!(tmp = (char*)malloc(sizeof(char) * (ft_char_in_nbr(n) + 1))))
		return (NULL);
	if (n < 0)
		tmp[0] = '-';
	while (i >= 1)
	{
		tmp[j] = (ft_topositif(n) / i) + '0';
		n = n % i;
		j++;
		i = i / 10;
	}
	tmp[j] = '\0';
	return (tmp);
}
