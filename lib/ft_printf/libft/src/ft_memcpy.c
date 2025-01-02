/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:49:15 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 17:49:18 by kchikwam         ###   ########.fr       */
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
