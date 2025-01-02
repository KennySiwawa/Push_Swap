/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:54:58 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 17:55:01 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	str_ptr;

	str_ptr = 0;
	while (str_ptr < n)
	{
		((unsigned char *)str)[str_ptr] = c;
		str_ptr++;
	}
	return (str);
}
