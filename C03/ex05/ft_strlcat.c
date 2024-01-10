/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:24:57 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/19 18:37:39 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destsize;
	unsigned int	srcsize;
	unsigned int	j;

	destsize = 0;
	srcsize = 0;
	while (dest[destsize] || src[srcsize])
	{
		if (dest[destsize])
			destsize++;
		else if (src[srcsize])
			srcsize++;
	}
    if (destsize >= size)
		return (size + srcsize);
	j = destsize;
	while (j < size - 1 && *src)
	{
		dest[j] = *src;
		j++;
		src++;
	}
	dest[j] = '\0';
	return (destsize + srcsize);
}
