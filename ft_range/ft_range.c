/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 10:22:40 by exam              #+#    #+#             */
/*   Updated: 2016/12/20 11:09:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i;
	int j;
	int	*t;
   
	if (start == end)
		i = 1;
	i = end - start;
	if (i < 0)
		i = -i;
	j = 0;
	if (!(t = (int*)malloc(sizeof(int) * i)))
		return (NULL);
	if (start <= end)
	{
		while (start <= end)
		{
			t[j] = start;
			j++;
			start++;
		}
	}
	else if (start > end)
	{
		while (start >= end)
		{
			t[j] = start;
			j++;
			start--;
		}
	}
	return (t);
}
