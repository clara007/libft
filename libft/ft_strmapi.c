/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 20:23:11 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/10 16:18:46 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen((char *)s) + 1;
	k = 0;
	tmp = (char *)malloc(sizeof(char) * j);
	if (!tmp)
		return (NULL);
	while (s[i] != '\0')
	{
		tmp[i] = f(k, s[i]);
		i++;
		k++;
	}
	tmp[i] = '\0';
	return (tmp);
}
