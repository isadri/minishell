/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabkadri <iabkadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:40:22 by iabkadri          #+#    #+#             */
/*   Updated: 2023/05/02 10:07:02 by iabkadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <limits.h>

long	ft_atoi(const char *str)
{
	unsigned long long	val;
	int					sign;

	while (*str && ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	val = 0;
	while (ft_isdigit(*str))
	{
		val = val * 10L + (*str++ - '0');
		if (val > LONG_MAX)
			return (-1);
	}
	return (val * sign);
}
