/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:26:52 by kchikwam          #+#    #+#             */
/*   Updated: 2025/01/02 17:26:56 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	c_index;
	int	sign;
	int	result;

	c_index = 0;
	sign = 1;
	result = 0;
	while (str[c_index] == ' ' || str[c_index] == '\n' || str[c_index] == '\t'
		|| str[c_index] == '\v' || str[c_index] == '\f' || str[c_index] == '\r')
		c_index++;
	if (str[c_index] == '-' || str[c_index] == '+')
	{
		if (str[c_index] == '-')
			sign = -1;
		c_index++;
	}
	while (str[c_index] >= '0' && str[c_index] <= '9')
	{
		result = (result * 10) + (str[c_index] - '0');
		c_index++;
	}
	return (result * sign);
}
