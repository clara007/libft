/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 09:25:53 by exam              #+#    #+#             */
/*   Updated: 2017/02/28 09:47:30 by exam             ###   ########.fr       */
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
		j++;
		i = i * 10;
	}
	return (j);
}

char *ft_itoa(int nbr)
{
	int i;
	int j;
	int n;
	int size;
	char *ans;

	i = 1;
	j = 0;
	n = nbr;
	if (n == -2147483648)
		ans = "-2147483648";
	else
	{
		size = char_in_nbr(nbr);
		if (!(ans = (char*)malloc(sizeof(char) * size + 1)))
			return (NULL);
		if (n < 0)
		{
			n = -n;
			ans[0] = '-';
			j++;
		}
		while ((n / i) >= 10)
			i = i * 10;
		while (i >= 1)
		{
			ans[j] = (n / i) + '0';
			n = n % i;
			i = i / 10;
			j++;
		}
		ans[j] = '\0';
	}
	return (ans);
}
