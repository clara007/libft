/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 23:30:06 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/07 19:41:03 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s);
	tmp = (char *)malloc(sizeof(char) * (j + 1));
	if (!tmp)
		return (NULL);
	else
	{
		while (s[i] != '\0')
		{
			tmp[i] = s[i];
			i++;
		}
	}
	tmp[i] = '\0';
	return (tmp);
}
