/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:02:00 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/27 10:11:16 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_tupple(int x, int y, int size, char *base)
{
	while (x < size - 1)
	{
		y = x + 1;
		while (y < size)
		{
			if (base[x] == base[y])
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}

int	errors(char *base)
{
	int	size;
	int	x;
	int	y;
	int	m;

	size = 0;
	while (base[size])
		size++;
	if (size == 0 || size == 1)
		return (1);
	m = 0;
	while (base[m])
	{
		if (base[m] == 43 || base[m] == 45 || base[m] <= 32 || base[m] == 127)
		{
			return (1);
		}
		m++;
	}
	x = 0;
	y = 0;
	if (check_tupple(x, y, size, base))
		return (1);
	return (0);
}

void	ft_puthex(long n, int bs, char *base)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_puthex(-n, bs, base);
	}
	else if (n < bs)
	{
		ft_putchar(base[n]);
	}
	else if (n >= bs)
	{
		ft_puthex(n / bs, bs, base);
		ft_puthex(n % bs, bs, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	basesize;
	long	nb;

	nb = nbr;
	basesize = 0;
	if (!errors(base))
	{
		while (base[basesize])
		{
			basesize++;
		}
		ft_puthex(nb, basesize, base);
	}
}
