/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_backspace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csandjon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:13:41 by csandjon          #+#    #+#             */
/*   Updated: 2016/11/09 23:05:26 by csandjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_skip_backspace(const char *s)
{
	int i;

	i = 0;
	if (ft_strlen(s) > 0)
	{
		i = ft_strlen(s) - 1;
		while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\v'
					|| s[i] == '\f' || s[i] == '\r') && (i - 1) >= 0)
			i--;
	}
	return (i);
}
