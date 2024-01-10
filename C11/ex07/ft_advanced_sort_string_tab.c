/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:39:44 by rboutaik          #+#    #+#             */
/*   Updated: 2023/08/03 18:36:55 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **tab, int i, int j)
{
	char	*temp;

	temp = tab[i];
	tab[i] = tab[j];
	tab[j] = temp;
}

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != 0)
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	size;

	size = ft_tablen(tab);
	while (size >= 0)
	{
		i = 0;
		while (tab[i + 1] != 0)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
				ft_swap(tab, i, i + 1);
			i++;
		}
		size--;
	}
}
