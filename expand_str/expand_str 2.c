/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 09:02:29 by exam              #+#    #+#             */
/*   Updated: 2017/01/10 10:36:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_skip_front_space(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t'))
		i++;
	return (i);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;
	char c;
	char *s;

	i = 0;
	c = '\n';
	if (argc == 2)
	{
		s = argv[1];
		i = ft_skip_front_space(s);
		while (s[i] != '\0')
		{
			if (s[i] != ' ' || s[i] != '\t')
			{
				ft_putchar(s[i]);
				i++;
			}
			if (s[i] == ' ' || s[i] == '\t')
			{
				while (s[i] == ' ' || s[i] == '\t')
					i++;
				if (s[i] != '\0')
				{
					ft_putchar(' ');
					ft_putchar(' ');
					ft_putchar(' ');
					ft_putchar(s[i]);
					i++;
				}
			}
		}
	}
	ft_putchar(c);
	return (0);
}
