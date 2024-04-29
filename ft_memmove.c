/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadam <kadam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 19:01:47 by kadam             #+#    #+#             */
/*   Updated: 2024/01/01 20:44:15 by kadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
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
	if (dest > str)
	{
		while (len > 0)
		{
			len--;
			dest[len] = str[len];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
