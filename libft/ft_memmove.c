/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 14:40:06 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/10 01:02:17 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	int				i;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	i = 0;
	if (tmp2 < tmp1)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			tmp1[i] = tmp2[i];
			i--;
		}
	}
	else
	{
		while (i < (int)n)
		{
			tmp1[i] = tmp2[i];
			i++;
		}
	}
	return (s1);
}
