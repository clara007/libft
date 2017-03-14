/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 15:41:10 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/03 17:06:54 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *tmp1;
	char *tmp2;

	tmp1 = s1;
	tmp2 = (char *)s2;
	while (*tmp1 != '\0')
		tmp1++;
	while (*tmp2 != '\0')
	{
		*tmp1 = *tmp2;
		tmp1++;
		tmp2++;
	}
	*tmp1 = '\0';
	return (s1);
}
