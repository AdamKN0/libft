/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadam <kadam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 17:01:02 by kadam             #+#    #+#             */
/*   Updated: 2024/01/01 17:24:01 by kadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*str;
	size_t				i;

	dest = (unsigned char *)dst;
	str = (const unsigned char *)src;
	i = 0;
	if (dest == str)
	{
		return (dest);
	}
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dst);
}
