/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:54:45 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 17:54:48 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_s;
	unsigned char	*src_s;

	dst_s = (unsigned char *)dst;
	src_s = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	if (dst_s < src_s)
		while (len--)
			*dst_s++ = *src_s++;
	else
	{
		dst_s += len;
		src_s += len;
		while (len--)
			*--dst_s = *--src_s;
	}
	return (dst);
}
