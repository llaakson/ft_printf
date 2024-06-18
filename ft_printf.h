/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaakson <llaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:44:34 by llaakson          #+#    #+#             */
/*   Updated: 2024/06/04 12:41:51 by llaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	ft_address_affix(int *ptr, unsigned long long nb);
void	ft_print_address(int *ptr, unsigned long long nb);

void	ft_hexadecimal(int *ptr, unsigned int nb, const char *format);
void	ft_print_unsigned(int *ptr, unsigned int nb);
void	ft_putnbr(int *ptr, int nb);
void	ft_putstr(int *ptr, char *s);

void	ft_putchar(int *ptr, int nb);
int		ft_printf(const char *format, ...);
void	ft_format(int *ptr, va_list arguments, const char *format);

#endif
