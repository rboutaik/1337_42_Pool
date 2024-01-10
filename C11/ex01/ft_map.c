/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:35:35 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/30 18:41:51 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*t;

	t = (int *)malloc(length * sizeof(int));
	if (t == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		t[i] = f(tab[i]);
		i++;
	}
	return (t);
}
