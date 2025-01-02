/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_itoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:08:53 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 16:09:25 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_calculate_num_length(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num >= 1)
	{
		len++;
		num /= 10;
	}
	return (len);
}

static char	*ft_convert_num_to_string(long num, char *str, size_t len)
{
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	len--;
	while (len)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (str[0] != '-')
		str[0] = (num % 10) + '0';
	return (str);
}

char	*ft_printf_itoa(long num)
{
	size_t	len;
	char	*str;

	len = ft_calculate_num_length(num);
	str = 0;
	str = ft_convert_num_to_string(num, str, len);
	if (!str)
		return (NULL);
	return (str);
}
