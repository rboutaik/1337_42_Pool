/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:59:43 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/19 12:59:27 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tolowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
}

int	ft_str_is_alpha(char str)
{
	if (!(str >= 'A' && str <= 'Z') && !(str >= 'a' && str <= 'z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*p1;
	int		i;

	if (*str == '\0')
		return (str);
	ft_tolowercase(str);
	if (*str >= 97 && *str <= 122)
		*str -= 32;
	p1 = str + 1;
	i = 0;
	while (*p1)
	{
		if (!(ft_str_is_alpha(*str) == 1) && !(*str >= 48 && *str <= 57))
		{
			if (*p1 >= 97 && *p1 <= 122)
			{
				*p1 -= 32;
			}
		}
		str++;
		p1++;
		i++;
	}
	return (str - i);
}
