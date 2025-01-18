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

static void	ft_putnbr(int nbr)
{
	if (nbr != 0)
	{
		ft_putnbr(nbr / 10);
		ft_printchar(nbr % 10 + '0');
	}
	return ;
}

static int ft_countnbrs(int nbr)
{
	if (nbr != 0)
		return 1 + ft_countnbrs(nbr / 10);
	return (0);
}

int	ft_printnbr(int n)
{
	int	count;

	count = 0;
	if (n < -2147483648 || n > 2147483647)
		return (-1);
	if (n == -2147483648)
		return (ft_printstr("-2147483648"));
	else if (n == 0)
		return (ft_printchar('0'));
	else if (n < 0)
	{
		count += ft_printchar('-');
		n = -n;
	}
	ft_putnbr(n);
	return (count + ft_countnbrs(n));
}
