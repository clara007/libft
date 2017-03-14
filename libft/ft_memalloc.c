/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 21:24:56 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/07 22:59:21 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *tmp;

	tmp = (char *)malloc(sizeof(char) * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, size);
	return ((void *)tmp);
}
