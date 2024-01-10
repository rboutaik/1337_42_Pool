/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:33:33 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/17 22:58:45 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		if (*src)
		{
			dest[i] = *src;
			src++;
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
