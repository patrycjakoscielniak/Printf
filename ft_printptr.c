/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkosciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 09:03:00 by pkosciel          #+#    #+#             */
/*   Updated: 2025/01/11 09:03:03 by pkosciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putptr(unsigned long adr)
{
	if (adr != 0)
	{
		ft_putptr(adr / 16);
		if (adr % 16 > 9)
			ft_printchar(adr % 16 + 87);
		else
			ft_printchar(adr % 16 + '0');
	}
	return ;
}

static int	ft_calc_len(unsigned long adr)
{
	if (adr != 0)
		return (1 + ft_calc_len(adr / 16));
	return (0);
}

int	ft_printptr(void *ptr)
{
	unsigned long	adr;
	int				count;

	count = 0;
	adr = (unsigned long)ptr;
	if (ptr == 0)
		return (ft_printstr("(nil)"));
	count += ft_printstr("0x");
	ft_putptr(adr);
	return (count + ft_calc_len(adr));
}
