/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshara <bshara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 16:05:50 by bshara            #+#    #+#             */
/*   Updated: 2019/04/23 17:04:44 by bshara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(tmp = f(lst)))
	{
		free(tmp);
		return (NULL);
	}
	ret = tmp;
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(tmp->next = &(*(*f)(lst))))
		{
			free(tmp->next);
			return (NULL);
		}
		lst = lst->next;
		tmp = tmp->next;
	}
	return (ret);
}