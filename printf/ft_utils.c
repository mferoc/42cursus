/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <gumartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 05:23:50 by gumartin          #+#    #+#             */
/*   Updated: 2020/10/24 11:44:39 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	int_to_char(size_t n, t_conv *conv)
{
	char	c;
	if (n < 10)
		c = n + '0';
	else if (n < 16 && conv->specifier == 'p')
		c = n + (conv->specifier - ('p' - 'a' +10));
	else if (n < 16)
		c = n + (conv->specifier - ('x' - 'a' +10));
	ft_putchar(c);;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	if (s)
		while (*s)
		{
		ft_putchar(*s);
		s++;
		}
}

// size_t	ft_strlen(const char *str)
// {
// 	size_t i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }
