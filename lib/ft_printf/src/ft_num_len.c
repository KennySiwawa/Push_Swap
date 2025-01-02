/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:59:28 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 17:59:31 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_num_len(unsigned long long n, int base)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		len++;
		n /= base;
	}
	return (len);
}

int	ft_ptr_len(unsigned long int n)
{
	return (ft_num_len(n, 16));
}

int	ft_unint_len(unsigned int n)
{
	return (ft_num_len(n, 10));
}

int	ft_hex_len(unsigned int n)
{
	return (ft_num_len(n, 16));
}
