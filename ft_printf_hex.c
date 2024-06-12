/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaakson <llaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:37:24 by llaakson          #+#    #+#             */
/*   Updated: 2024/06/03 13:51:41 by llaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

void ft_hexadecimal(int *ptr, unsigned int nb,const char *format)
{
	if (nb >= 16)
	{
		ft_hexadecimal(ptr, nb / 16, format);
		ft_hexadecimal(ptr, nb % 16, format);
	}
	if (nb < 10)
		ft_putchar(ptr, nb + 48);
	else if (nb < 16)
	{
		if (*format == 'x')
			ft_putchar(ptr, nb + 87);
		else
			ft_putchar(ptr, nb + 55);
	}
}
/*void	ft_hexadecimal(int *ptr, unsigned int nb, const char *format)
{
	int		i;
	char	temp;
	char	print[32];

	i = 0;
	if (nb == 0)
		ft_putchar (ptr, '0');
	while (nb != 0)
	{
		temp = nb % 16;
		if ((nb % 16) < 10)
			temp += 48;
		else
			temp += 55;
		print[i++] = temp;
		nb /= 16;
	}
	while (i-- > 0)
	{
		if (*format == 'x')
			print[i] = ft_tolower(print[i]);
		ft_putchar(ptr, print[i]);
	}
}*/
