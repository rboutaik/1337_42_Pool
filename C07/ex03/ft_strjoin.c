/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:51:33 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/29 22:36:56 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strslen(char **strs, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

int	ft_seplen(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

char	*ft_strcopy(char *tab, char **strs, char *sep, int size)
{
	int	i;
	int	k;

	i = -1;
	while (++i < size)
	{
		while (*strs[i])
		{
			*tab = *strs[i];
			strs[i]++;
			tab++;
		}
		k = 0;
		if (i == size - 1)
		{
			*tab = '\0';
			break ;
		}
		while (sep[k])
		{
			*tab = sep[k++];
			tab++;
		}
	}
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		tsize;
	char	*tab;

	if (size == 0)
		return ((char *)malloc(1 * sizeof(char)));
	tsize = ft_strslen(strs, size);
	tsize += ft_seplen(sep) * (size - 1) + 1;
	tab = (char *)malloc(tsize * sizeof(char));
	tab = ft_strcopy(tab, strs, sep, size);
	return (tab - tsize + 1);
}
