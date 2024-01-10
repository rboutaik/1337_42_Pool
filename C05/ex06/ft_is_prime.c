/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:41:52 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/25 13:33:47 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_sqrt(long nb)
{
	long	i;

	i = 2;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	long	i;
	long	sqrt;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	sqrt = ft_sqrt(nb);
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
