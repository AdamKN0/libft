/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadam <kadam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 18:55:39 by kadam             #+#    #+#             */
/*   Updated: 2024/01/01 17:29:20 by kadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dest;

	if ((long)count < 0 && (long)size < 0)
	{
		return (NULL);
	}
	dest = (char *)malloc((count * size));
	if (dest == NULL)
	{
		return (NULL);
	}
	ft_bzero(dest, count * size);
	return (dest);
}
