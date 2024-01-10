/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:05:24 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/29 22:04:52 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	else
	{
		while (min < max)
		{
			(*range)[i] = min;
			i++;
			min++;
		}
	}
	return (size);
}
