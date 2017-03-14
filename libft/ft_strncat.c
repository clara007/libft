/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 16:10:52 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/07 19:36:47 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*tmp1;
	char	*tmp2;
	int		i;

	tmp1 = s1;
	tmp2 = (char *)s2;
	i = 0;
	while (*tmp1)
		tmp1++;
	while (n > 0 && *tmp2)
	{
		*tmp1 = *tmp2;
		tmp1++;
		tmp2++;
		n--;
	}
	*tmp1 = '\0';
	return (s1);
}
