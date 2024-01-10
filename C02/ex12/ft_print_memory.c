/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 22:09:12 by rboutaik          #+#    #+#             */
/*   Updated: 2023/08/03 22:11:45 by rboutaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_tohex(unsigned char *p, int i)
{
    if (p[i] / 16 < 10)
        ft_putchar(p[i] / 16 + 48);
    else
        ft_putchar(p[i] / 16 + 87);
    if (p[i] % 16 < 10)
        ft_putchar(p[i] % 16 + 48);
    else
        ft_putchar(p[i] % 16 + 87);
    
}

void    *ft_print_memory(void *addr, int size)
{
    unsigned char *p = (unsigned char *)addr;
    int i = 7;
    while (i >= 0)
    {
        ft_tohex(p, i);
        i--;
    }
    write (1, ": ",2);
    i = 0;
    while (i < size)
    {
        ft_tohex(p, i);
        if (i % 2 != 0)
            write (1, " ", 1);
        i++;
    }
    i = 0;
    char *add = (char *)addr;
    while (i < size)
    {
        if (add[i] < 32 || add[i] == 127)
            ft_putchar('.');
        else
            ft_putchar(add[i]);
        i++;
    }
 	return (addr);   
}
