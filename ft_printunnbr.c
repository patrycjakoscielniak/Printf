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

static void	ft_putnbr(unsigned int nbr)
{
	if (nbr != 0)
	{
		ft_putnbr(nbr / 10);
		ft_printchar(nbr % 10 + '0');
	}
	return ;
}

static int	ft_countnbrs(unsigned int n)
{
	if (n != 0)
		return 1 + ft_countnbrs(n / 10);
	return (0);
}

int	ft_printunnbr(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr < 10)
		return (ft_printchar(nbr + '0'));
	else
		ft_putnbr(nbr);
	return (ft_countnbrs(nbr));
}
