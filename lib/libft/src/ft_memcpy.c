/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:57:06 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 16:57:09 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_s;
	unsigned char	*src_s;

	if (!dest && !src)
		return (dest);
	dest_s = (unsigned char *)dest;
	src_s = (unsigned char *)src;
	while (n--)
		*dest_s++ = *src_s++;
	return (dest);
}
