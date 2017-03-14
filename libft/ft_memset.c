/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 13:31:58 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/07 23:28:14 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char a;
	unsigned char *tmp;

	a = (unsigned char)c;
	tmp = (unsigned char *)s;
	while (n > 0)
	{
		*tmp = a;
		tmp++;
		n--;
	}
	return (s);
}
