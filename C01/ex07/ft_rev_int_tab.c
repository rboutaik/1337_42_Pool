/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 22:04:48 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/15 23:41:25 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	s;
	int	e;
	int	tmp;

	s = 0;
	e = size - 1;
	while (s < e)
	{
		tmp = tab[s];
		tab[s] = tab[e];
		tab[e] = tmp;
		s++;
		e--;
	}
}
