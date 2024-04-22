/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:25:08 by sgarigli          #+#    #+#             */
/*   Updated: 2024/01/10 17:22:22 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp_lst;
	t_list	*my_lst;

	if (!lst || !del || !f)
		return (NULL);
	my_lst = NULL;
	while (lst)
	{
		tmp_lst = ft_lstnew(f(lst->content));
		if (!tmp_lst)
		{
			ft_lstclear(&my_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&my_lst, tmp_lst);
		lst = lst->next;
	}
	return (my_lst);
}
