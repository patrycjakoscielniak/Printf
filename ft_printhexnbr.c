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

static void	ft_puthexnbr(unsigned int nbr)
{
	if (nbr != 0)
	{
		ft_puthexnbr(nbr / 16);
		if (nbr % 16 > 9)
			ft_printchar(nbr % 16 + 87);
		else
			ft_printchar(nbr % 16 + '0');
	}
	return ;
}

static void ft_puthexXnbr(unsigned int nbr)
{
	if (nbr != 0)
	{
		ft_puthexXnbr(nbr / 16);
		if (nbr % 16 > 9)
			ft_printchar(nbr % 16 + 55);
		else
			ft_printchar(nbr % 16 + '0');
	}
	return ;
}

static int ft_calculatedigits(unsigned int nbr)
{
	if (nbr != 0)
		return 1 + ft_calculatedigits(nbr / 16);
	return (0);
}

int	ft_printhexnbr(unsigned int n, char c)
{
	if (n == 0)
		return (ft_printchar('0'));
	else if (c == 'x')
		ft_puthexnbr(n);
	else if (c == 'X')
		ft_puthexXnbr(n);
	return (ft_calculatedigits(n));
}
