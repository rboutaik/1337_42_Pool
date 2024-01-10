/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:48:12 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/23 17:33:37 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*tab;

	if (min >= max)
		return (NULL);
	size = max - min;
	tab = (int *)malloc(size * sizeof(int));
	while (min < max)
	{
		*tab = min;
		tab++;
		min++;
	}
	tab = tab - size;
	return (tab);
}
