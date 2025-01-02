/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:59:45 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 17:59:47 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Func to calculate the length of the string rep of a num
static size_t	ft_calculate_unsigned_length(unsigned int num)
{
	size_t	length;

	length = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		length++;
		num /= 10;
	}
	return (length);
}

// Funct to convert an unsigned int to a string rep
char	*ft_printf_utoa(unsigned int num)
{
	size_t	length;
	char	*str;

	length = ft_calculate_unsigned_length(num);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[length] = '\0';
	while (length-- > 0)
	{
		str[length] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
