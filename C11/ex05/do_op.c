/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:25:42 by rboutaik          #+#    #+#             */
/*   Updated: 2023/08/03 20:05:31 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "funcs.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	i;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		i = -nb;
		ft_putnbr(i);
	}
	else if (nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

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

void	ft_show(char **argv, int (*tab[])(int a, int b))
{
	if (argv[2][0] == '+')
		ft_putnbr(tab[0](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '-')
		ft_putnbr(tab[1](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '*')
		ft_putnbr(tab[2](ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '/')
	{
		if (ft_atoi(argv[3]) == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(tab[3](ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	else if (argv[2][0] == '%')
	{
		if (ft_atoi(argv[3]) == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(tab[4](ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	else
		write (1, "0", 1);
}

int	main(int argc, char *argv[])
{
	int	(*tab[5])(int a, int b);

	tab[0] = &ft_sum;
	tab[1] = &ft_sub;
	tab[2] = &ft_mult;
	tab[3] = &ft_div;
	tab[4] = &ft_mod;
	if (argc == 4)
	{
		ft_show(argv, tab);
		ft_putchar('\n');
	}
}
