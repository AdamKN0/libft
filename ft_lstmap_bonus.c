/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadam <kadam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 21:32:20 by kadam             #+#    #+#             */
/*   Updated: 2024/01/03 13:11:53 by kadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*ptr_content;
	t_list	*next_node;
	t_list	*new_node;

	new_node = NULL;
	if (f == NULL || del == NULL || lst == NULL)
	{
		return (NULL);
	}
	while (lst != NULL)
	{
		ptr_content = f(lst->content);
		next_node = ft_lstnew(ptr_content);
		if (next_node == NULL)
		{
			del(ptr_content);
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		ft_lstadd_back(&new_node, next_node);
		lst = lst->next;
	}
	return (new_node);
}
