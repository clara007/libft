/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 10:53:50 by exam              #+#    #+#             */
/*   Updated: 2016/11/08 11:57:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	char c;

	i = 0;
	j = 0;
	k = 0;
	c = '\n';
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
			{
				argv[1][i] = 'N' + ('M' - argv[1][i]);
				write(1, &argv[1][i], 1);
				i++;
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
			{
				argv[1][i] = 'n' + ('m' - argv[1][i]);
				write(1, &argv[1][i], 1);
				i++;
			}
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
			{
				argv[1][i] = 'M' + ('N' - argv[1][i]);
				write(1, &argv[1][i], 1);
				i++;
			}
			else if  (argv[1][i] >= 'n' && argv[1][i] <= 'z')
			{
				argv[1][i] = 'm' + ('n' - argv[1][i]);
				write(1, &argv[1][i], 1);
				i++;
			}
			else
			{
				write(1, &argv[1][i], 1);
		 		i++;
			}	
		}
	}
	write(1, &c, 1);
	return (0);
}
