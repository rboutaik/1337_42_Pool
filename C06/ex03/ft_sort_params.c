/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:34:31 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/20 17:22:55 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c, int size)
{
	write(1, c, size);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 || *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **c1, int i, int j)
{
	char	*temp;

	temp = c1[i];
	c1[i] = c1[j];
	c1[j] = temp;
}

int	ft_strlen(char *s)
{
	int	size;

	size = 0;
	while (*s)
	{
		s++;
		size++;
	}
	return (size);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(argv, j, j + 1);
			j++;
		}
		i++;
	}
	k = 1;
	while (k < argc)
	{
		ft_putchar(argv[k], ft_strlen(argv[k]));
		k++;
		write(1, "\n", 1);
	}
	return (0);
}
