/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:44:57 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/19 18:18:04 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{	
	char	*tab;

	tab = "0123456789abcdef";
	while (*str)
	{
		if (*str < 32 || *str == 127)
		{
			write(1, "\\", 1);
			write(1, &tab[*str / 16], 1);
			write(1, &tab[*str % 16], 1);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
