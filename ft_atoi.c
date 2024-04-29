/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadam <kadam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:48:57 by kadam             #+#    #+#             */
/*   Updated: 2023/12/31 17:43:00 by kadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *str, int i, int sign)
{
	long long	counter;
	long long	old;

	counter = 0;
	old = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		old = counter;
		counter = counter * 10 + str[i] - '0';
		if (old != (counter / 10) && sign == -1)
		{
			return (0);
		}
		else if (old != (counter / 10) && sign == 1)
		{
			return (-1);
		}
		i++;
	}
	return (sign * (int)counter);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	return (check(str, i, sign));
}
