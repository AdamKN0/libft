/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadam <kadam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 19:35:13 by kadam             #+#    #+#             */
/*   Updated: 2024/01/01 12:42:42 by kadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dest;
	size_t	total_len;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dst);
	total_len = len_src + len_dest;
	if (dstsize == 0 || dstsize <= len_dest)
	{
		return (len_src + dstsize);
	}
	while (src[i] != '\0' && i < dstsize - len_dest - 1)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (total_len);
}
