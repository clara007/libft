/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 09:02:10 by exam              #+#    #+#             */
/*   Updated: 2017/02/07 09:34:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	char *s1;
	char *s2;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		k = 0;
		s1 = argv[1];
		s2 = argv[2];
		while (s1[j] != '\0')
		{
			if (s1[j] == ' ' || s1[j] == '\t')
				k++;
			j++;
		}
		if (ft_strlen(s1) == k)
			write(1, "1\n", 2);
		else
		{
			j = 0;
			while(s2[i] != '\0')
			{
				if (s2[i] == s1[j])
					j++;
				i++;
			}
			if (ft_strlen(s1) == j)
				write(1, "1\n", 2);
			else
				write(1, "0\n", 2);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
