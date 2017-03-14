/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 12:02:42 by exam              #+#    #+#             */
/*   Updated: 2017/03/14 12:10:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void ft_putnbr(int nbr)
{
	int tmp;
	char ans;
	int k;

	tmp = nbr;
	k = 1;
	while ((tmp / k) > 10)
		k = k * 10;
	while (k >= 1)
	{
		ans = (nbr / k) + '0';
		nbr = nbr % k;
		write(1, &ans, 1);
		k  = k / 10;
	}
}

int main(int argc, char ** argv)
{
	int ans;

	if (argc > 1)
	{
		(void)argv;
		ans = argc - 1;
		ft_putnbr(ans);
		write(1, "\n", 1);
	}
	else
	{
		ft_putnbr(0);
		write(1, "\n", 1);
	}
	return (0);
}
