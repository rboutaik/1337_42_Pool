/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:44:04 by rboutaik          #+#    #+#             */
/*   Updated: 2023/07/31 18:04:24 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_error(char *base)
{
	int	i;
	int	j;
	int	size;

	size = 0;
	while (base[size])
		size++;
	if (size == 1 || base[0] == '\0')
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' 
			|| (base[i] >= 9 && base[i] <= 13))
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signe;

	i = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	return (signe);
}

int	ft_int_fbase(char c,char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if(c == base[i])
			return (i);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	bsize;
	int	signe;
	int	i;
	int	nb;

	signe = 1;
	if (ft_error(base))
		return (0);
	else
	{
		bsize = 0;
		while (base[bsize])
			bsize++;
		signe = ft_atoi(str);
		i = 0;
		nb = 0;
		while (!ft_in_base(str[i], base) && str[i])
			i++;
		while (str[i] && ft_in_base(str[i], base))
		{
			nb *= bsize;
			nb += ft_int_fbase(str[i], base);
			i++;
		}
	}
	return (nb * signe);
}
