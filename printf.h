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

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
int		ft_printchar(char c);
int		ft_printstr(char *s);
int		ft_printnbr(int n);
size_t	ft_strnum(char *s);

#endif
