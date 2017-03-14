/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memnoverlap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:29:41 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/10 14:43:24 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memnoverlap(void *s1, void *s2, int n)
{
	char *tmp1;
	char *tmp2;

	tmp1 = (char*)s1;
	tmp2 = (char*)s2;
	if (!tmp1 || !tmp2)
		return (0);
	if ((s1 < s2) && (s1 + n) >= s2)
		return (1);
	if ((s2 < s1) && (s2 + n) >= s1)
		return (1);
	return (0);
}
