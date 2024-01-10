/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:14:30 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/18 16:55:53 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	countsize(char *s)
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srcsize;

	i = 0;
	srcsize = countsize(src);
	if (size == 0)
	{
		return (srcsize);
	}
	while (i < size - 1 && *src)
	{
		*dest = *src;
		src++;
		i++;
		dest++;
	}
	*dest = '\0';
	return (srcsize);
}
