/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <gumartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 19:52:14 by gumartin          #+#    #+#             */
/*   Updated: 2020/10/25 15:05:27 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_p_print(t_conv *conv, va_list args)
{
	//see flags
	size_t addr;

	addr = (size_t)va_arg(args, void *);
	ft_putstr(conv, "0x");
	//specifier zeros here
	ft_putnbr_xX(conv, addr);
}