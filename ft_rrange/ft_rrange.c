/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 09:03:02 by exam              #+#    #+#             */
/*   Updated: 2017/01/17 09:23:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int size;
	int i;
	int *ans;

	i = 0;
	size = start - end;
	if (size < 0)
		size = -size;
	ans = (int*)malloc(sizeof(int) * size + 1);
	if (start < end)
	{
		while (i <= size)
		{
			ans[i] = end;
			i++;
			end--;
		}
	}
	else
	{
		while (i <= size)
		{
			ans[i] = end;
			i++;
			end++;
		}
	}
	return (ans);
}
