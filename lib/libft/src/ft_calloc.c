/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:15:10 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 16:16:00 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	void			*dst;
	unsigned char	*ptr;
	size_t			i;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (count > SIZE_MAX / size)
		return (NULL);
	total_size = size * count;
	dst = malloc(total_size);
	if (dst == NULL)
		return (NULL);
	ptr = (unsigned char *)dst;
	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (dst);
}
