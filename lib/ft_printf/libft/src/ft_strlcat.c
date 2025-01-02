/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:56:33 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 17:56:34 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_index;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_index = 0;
	while (src[src_index] != '\0' && dst_len + 1 < dstsize)
	{
		dst[dst_len] = src[src_index];
		dst_len++;
		src_index++;
	}
	dst[dst_len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[src_index]));
}
