/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadam <kadam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 18:05:55 by kadam             #+#    #+#             */
/*   Updated: 2023/12/31 18:16:56 by kadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	x;

	len = ft_strlen(s);
	x = (char)c;
	while (len >= 0)
	{
		if (s[len] == x)
		{
			return ((char *)s + len);
		}
		len--;
	}
	return (NULL);
}
