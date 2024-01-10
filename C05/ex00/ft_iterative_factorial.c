/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 21:30:59 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/24 19:33:04 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		while (nb > 0)
		{
			fact *= nb;
			nb--;
		}
	}
	return (fact);
}
