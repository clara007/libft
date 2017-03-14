/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 16:56:17 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/07 19:42:58 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	a;
	int		i;
	int		j;

	a = (char)c;
	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	while (j <= i)
	{
		if (s[j] == a)
			return ((char *)(s + j));
		j++;
	}
	return (NULL);
}
