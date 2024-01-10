/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 22:44:16 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/13 23:12:04 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*p1;
	int	*p2;
	int	i;

	i = 0;
	while (i < size)
	{
		p1 = tab;
		while (p1 < tab + size - 1)
		{
			p2 = p1 + 1;
			if (*p1 > *p2)
			{
				ft_swap(p1, p2);
			}
			p1++;
		}
		i++;
	}
}
