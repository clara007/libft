/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 10:39:43 by exam              #+#    #+#             */
/*   Updated: 2017/01/10 10:56:48 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	int nbr;

	i = 2;
	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		if (nbr > 0)
		{
			if (nbr == 1)
				printf("%d", nbr);
			if (nbr > 1)
			{
				while (i <= nbr)
				{
					if (nbr % i == 0)
					{
						nbr = nbr / i;
						printf("%d", i);
						if (nbr != 1)
							printf("*");
					}
					else
						i++;
				}
			}
		}
	}
	printf("\n");
	return (0);
}
