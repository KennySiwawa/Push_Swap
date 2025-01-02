/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:07:34 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 16:07:38 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isspec(int c)
{
	const char	*specs;
	int			i;

	specs = "-0.*# +";
	i = 0;
	while (specs[i])
	{
		if (c == specs[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_istype(int c)
{
	const char	*types;
	int			i;

	types = "csdiuxXp%";
	i = 0;
	while (types[i])
	{
		if (c == types[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_isflag(int c)
{
	return (ft_istype(c) || ft_isdigit(c) || ft_isspec(c));
}
