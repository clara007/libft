/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 10:23:19 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/07 23:30:42 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		i;
	char	c;

	i = 1;
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		while (n / i >= 10)
			i = i * 10;
		while (i >= 1)
		{
			c = (n / i) + '0';
			n = n % i;
			write(1, &c, 1);
			i = i / 10;
		}
	}
}