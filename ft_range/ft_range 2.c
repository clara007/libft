/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 09:03:37 by exam              #+#    #+#             */
/*   Updated: 2017/02/21 09:21:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int start, int end)
{
	int diff;
	int i;
	int *range;

	diff = end - start;
	if (diff < 0)
		diff = -diff;
	i = 0;
	if (!(range = (int*)malloc(sizeof(int) * diff + 1)))
		return (NULL);
	if (end >= start)
	{
		while (i <= diff)
		{
			range[i] = start;
			i++;
			start++;
		}
	}
	else 
	{
		while (i <= diff)
		{
			range[i] = start;
			i++;
			start--;
		}
	}
	return (range);
}
