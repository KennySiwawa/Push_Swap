/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:56:55 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 17:56:58 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	char	*result;

	if (!s)
		return (NULL);
	str = ft_str_new(ft_strlen(s));
	if (!str)
		return (NULL);
	i = 0;
	result = str;
	while (*s)
		*str++ = f(i++, *s++);
	*str = '\0';
	return (result);
}
