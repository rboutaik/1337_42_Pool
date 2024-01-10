/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:49:51 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/20 09:00:21 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nb;
	int	signe;

	nb = 0;
	signe = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signe++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nb *= 10;
		nb += *str - 48;
		str++;
	}
	if (!(signe % 2))
		return (nb);
	return (-nb);
}
