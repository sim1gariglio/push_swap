/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:16:30 by sgarigli          #+#    #+#             */
/*   Updated: 2024/01/10 17:22:17 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp_lst;

	if (!lst || !f)
		return ;
	tmp_lst = lst;
	while (tmp_lst->next)
	{
		f(tmp_lst->content);
		tmp_lst = tmp_lst->next;
	}
	f(tmp_lst->content);
}
