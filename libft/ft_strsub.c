/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 21:41:53 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/08 00:30:12 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp1;
	size_t	i;

	i = 0;
	if (!s || start > ft_strlen(s))
		return (NULL);
	tmp1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!tmp1)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		tmp1[i] = s[start];
		i++;
		start++;
	}
	tmp1[i] = '\0';
	return (tmp1);
}
