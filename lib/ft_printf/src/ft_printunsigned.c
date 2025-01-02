/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:11:13 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 16:11:16 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// prints a string with specified precision
int	ft_print_u(char *nbstr, t_flags flags)
{
	int	printed_chars;

	printed_chars = 0;
	if (flags.precision >= 0)
		printed_chars += ft_pad_width(flags.precision - 1,
				ft_strlen(nbstr) - 1, 1);
	printed_chars += ft_print_s(nbstr);
	return (printed_chars);
}

// prints an unsigned int with flags and width adjustments
int	ft_print_unint(char *nbstr, t_flags flags)
{
	int	printed_chars;

	printed_chars = 0;
	if (flags.left == 1)
		printed_chars += ft_print_u(nbstr, flags);
	if (flags.precision >= 0 && (size_t)flags.precision < ft_strlen(nbstr))
		flags.precision = ft_strlen(nbstr);
	if (flags.precision >= 0)
	{
		flags.width -= flags.precision;
		printed_chars += ft_pad_width(flags.width, 0, 0);
	}
	else
		printed_chars += ft_pad_width(flags.width,
				ft_strlen(nbstr), flags.zero);
	if (flags.left == 0)
		printed_chars += ft_print_u(nbstr, flags);
	return (printed_chars);
}

// prints an unsigned int with flags and width adjustments
int	ft_print_unsigned(unsigned n, t_flags flags)
{
	char	*nbstr;
	int		printed_chars;

	printed_chars = 0;
	if (flags.precision == 0 && n == 0)
	{
		printed_chars += ft_pad_width(flags.width, 0, 0);
		return (printed_chars);
	}
	nbstr = ft_printf_utoa(n);
	if (!nbstr)
		return (0);
	printed_chars += ft_print_unint(nbstr, flags);
	free(nbstr);
	return (printed_chars);
}
