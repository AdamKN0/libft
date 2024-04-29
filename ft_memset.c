/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadam <kadam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:05:15 by kadam             #+#    #+#             */
/*   Updated: 2024/01/01 13:09:42 by kadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	x;

	str = (unsigned char *)b;
	i = 0;
	x = (unsigned char)c;
	while (i < len)
	{
		str[i] = x;
		i++;
	}
	return (b);
}
