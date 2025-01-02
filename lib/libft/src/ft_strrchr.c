/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:00:00 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 17:00:02 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*last_occurrence;
	unsigned char	uc;

	last_occurrence = NULL;
	uc = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == uc)
		{
			last_occurrence = s;
		}
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}
