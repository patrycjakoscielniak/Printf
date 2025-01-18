/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkosciel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 09:03:26 by pkosciel          #+#    #+#             */
/*   Updated: 2025/01/11 09:03:28 by pkosciel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *, ...);
int	ft_printchar(char c);
int	ft_printstr(char *s);
int	ft_printnbr(int n);
int ft_printunnbr(unsigned int n);
int	ft_printhexnbr(unsigned int n, char c);
int	ft_printptr(void *ptr);

#endif
