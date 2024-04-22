/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:47:39 by sgarigli          #+#    #+#             */
/*   Updated: 2024/01/10 17:22:27 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*tmp_lst;

	size = 1;
	tmp_lst = lst;
	if (!lst)
		return (0);
	while (tmp_lst->next)
	{
		tmp_lst = tmp_lst->next;
		size++;
	}
	return (size);
}
