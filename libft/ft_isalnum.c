/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:59:19 by sgarigli          #+#    #+#             */
/*   Updated: 2024/01/10 17:21:46 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (8);
	if (c >= 'a' && c <= 'z')
		return (8);
	if (c >= '0' && c <= '9')
		return (8);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c = '5';

	printf("originale : %d\n", isalnum(c));
	printf("mio : %d\n", ft_isalnum(c));
	return (0);
}*/
