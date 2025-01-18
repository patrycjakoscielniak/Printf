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

int	ft_printstr(char *str)
{
	int	count;

	if (str == NULL)
		return (ft_printstr("(null)"));
	count = 0;
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}
