/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:48:28 by rboutaik          #+#    #+#             */
/*   Updated: 2023/08/02 16:56:13 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_tablen(char *str, char *charset)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset) 
			&& (is_charset(str[i + 1], charset) || !str[i + 1]))
			size++;
		i++;
	}
	return (size);
}

char	*ft_strcopy(char *str, char *charset)
{
	int		i;
	char	*string;
	int		size;

	size = 0;
	i = 0;
	while (str[i] && !is_charset(str[i], charset))
	{
		size++;
		i++;
	}
	string = (char *)malloc(size * sizeof(char) + 1);
	i = 0;
	while (i < size)
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		tabsize;
	int		i;

	tabsize = ft_tablen(str, charset);
	tab = (char **)malloc((tabsize + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < tabsize)
	{
		while (*str)
		{
			while (is_charset(*str, charset) && *str)
				str++;
			if (!is_charset(*str, charset))
				tab[i] = ft_strcopy(str, charset);
			while (!is_charset(*str, charset) && *str)
				str++;
			i++;
		}
	}
	tab[tabsize] = 0;
	return (tab);
}
