/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 10:26:39 by exam              #+#    #+#             */
/*   Updated: 2017/03/07 11:16:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_isspace(char c)
{
	int i;

	i = 0;
	if (c == ' ' || c == '\t' || c == '\v' || c == '\r')
		i = 1;
	return (i);
}

int ft_skipspace(char *s)
{
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\v' || s[i] == '\r')
		i++;
	return (i);
}

int ft_skip_back_space(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i = i - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\v' || s[i] == '\r')
		i--;
	return (i);
}

int main(int argc, char** argv)
{
	char *s;
	int i;
	int j;

	if (argc == 2)
	{
		s = argv[1];
		i = ft_skipspace(s);
		j = ft_skip_back_space(s);
		while (s[i] != '\0' && i <= j)
		{
			if (ft_isspace(s[i]) == 1)
			{
				while (ft_isspace(s[i]) == 1 && s[i] != '\0')
					i++;
				ft_putchar(' ');
				ft_putchar(' ');
				ft_putchar(' ');
			}
			if (ft_isspace(s[i]) == 0)
				ft_putchar(s[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
