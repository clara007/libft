/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 22:11:50 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/10 16:11:56 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	size_t	j;
	size_t	k;

	j = 0;
	if (!s1 || !s2)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	k = 0;
	if (!tmp)
		return (NULL);
	while (k < ft_strlen(s1))
	{
		tmp[k] = (char)s1[k];
		k++;
	}
	while (j < ft_strlen(s2))
	{
		tmp[k] = (char)s2[j];
		k++;
		j++;
	}
	tmp[k] = '\0';
	return (tmp);
}
