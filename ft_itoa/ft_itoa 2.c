/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 09:38:08 by exam              #+#    #+#             */
/*   Updated: 2017/02/07 10:02:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int char_in_nbr(int nbr)
{
	int i;
	int j;
	int n;

	i = 1;
	j = 1;
	n = nbr;
	if (n < 0)
		n = -n;
	while ((n / i) >= 10)
	{
		i = i * 10;
		j++;
	}
	return (j);
}

char *ft_itoa(int nbr)
{
	int i;
	int j;
	char *ans;

	i = 1;
	if (nbr == -2147483648)
		return ("-2147483648");
	j = char_in_nbr(nbr) + 1;
	if (nbr < 0)
		j++;
	if (!(ans = (char*)malloc(sizeof(char) * j)))
		return (NULL);
	j = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		ans[j] = '-';
		j++;
	}
	while ((nbr / i) >= 10)
	   i = i * 10;
	while (i >= 1)
	{
		ans[j] = (nbr / i) + '0';
		nbr = nbr % i;
		i = i / 10;
		j++;
	}
	ans[j] = '\0';
	return (ans);
}
