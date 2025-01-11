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

#include "printf.h"

static int ft_format(char c, va_list *arg)
{
	int		res;

	res = 0;
	if (c == '%')
		res += ft_printchar(c);
	else if (c == 'c')
		res += ft_printchar(va_arg(*arg, char));
	else if (c == 's')
		res += ft_printstr(va_arg(*arg, char *));
	else if (c == 'i' || c == 'd')
		res += ft_printnbr(va_arg(*arg, int));
	else if (c == 'u')
		res += ft_printunnbr(va_arg(*arg, unsigned int));
	else if (c == 'p')
		res += ft_printptr(va_arg(*arg, void *));
	else if (c == 'x' || c == 'X')
		res += ft_printhexnbr(va_arg(*arg, long));
	return (res);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	int		i;
	va_list args;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_format(str[i + 1], &args);
			i++;
		}
		else
			count += ft_printchar(&str[i]);
		i++;
	}
	return (count);
}
