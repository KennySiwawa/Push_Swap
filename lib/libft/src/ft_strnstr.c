/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:59:52 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 16:59:54 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t max_len)
{
	size_t	h_index;
	size_t	n_index;

	h_index = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[h_index] != '\0' && h_index < max_len)
	{
		n_index = 0;
		while (haystack[h_index + n_index] == needle[n_index]
			&& (h_index + n_index) < max_len)
		{
			if (needle[n_index + 1] == '\0')
				return ((char *)&haystack[h_index]);
			n_index++;
		}
		h_index++;
	}
	return (0);
}
