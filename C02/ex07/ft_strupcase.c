/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:36:05 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/19 15:52:45 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (str);
	}
	i = 0;
	while (*str)
	{
		if (*str <= 122 && *str >= 97)
		{
			*str -= 32;
		}
		str++;
		i++;
	}
	str = str - i;
	return (str);
}
