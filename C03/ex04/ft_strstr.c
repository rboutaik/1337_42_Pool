/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:51:14 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/20 19:02:02 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *s1 == *s2 && (*s1 || *s2))
	{
		i++;
		s1++;
		s2++;
		if (!*s2)
		{
			return (*s1 - *s2);
		}
	}
	return (*s1 - *s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	to_find_size;

	if (!to_find[0])
		return (str);
	to_find_size = 0;
	while (to_find[to_find_size])
	{
		to_find_size++;
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			if (!ft_strncmp(str, to_find, to_find_size - 1))
			{
				return (str);
			}
		}
		str++;
	}
	return (NULL);
}
