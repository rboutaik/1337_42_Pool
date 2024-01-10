/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:26:53 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/30 12:58:27 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		s;
	char	*p;

	s = 0;
	while (src[s])
		s++;
	p = (char *)malloc(s * sizeof(char) + 1);
	if (p == NULL)
		return (0);
	while (*src)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	p = p - s;
	return (p);
}
