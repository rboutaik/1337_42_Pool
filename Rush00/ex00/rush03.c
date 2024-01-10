/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:44:52 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/16 18:38:30 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_it(int x_col, int x_ln, int ligne, int col)
{
	while (col <= x_col)
	{
		if (col == 1 && (ligne == 1 || ligne == x_ln))
		{
			ft_putchar(65);
		}
		else if (col == x_col && (ligne == 1 || ligne == x_ln))
		{
			ft_putchar(67);
		}
		else if ((ligne != 1 && ligne != x_ln && col != 1 && col != x_col))
		{
			ft_putchar(32);
		}
		else
		{
			ft_putchar(66);
		}
		col++;
	}
}

void	rush(int x, int y)
{
	int	ligne;
	int	col;

	ligne = 1;
	while (ligne <= y)
	{
		col = 1;
		ft_print_it(x, y, ligne, col);
		ft_putchar(10);
		ligne++;
	}
}
