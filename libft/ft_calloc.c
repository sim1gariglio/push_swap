/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:11:14 by sgarigli          #+#    #+#             */
/*   Updated: 2024/01/10 17:21:40 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	res = malloc(size * nmemb);
	if (!res)
		return (NULL);
	ft_bzero(res, size * nmemb);
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%p\n", ft_calloc(214748364, 90));
	printf("%p\n", calloc(214748364, 90));
	return (0);
}*/
