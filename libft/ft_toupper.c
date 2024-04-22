/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:51:09 by sgarigli          #+#    #+#             */
/*   Updated: 2024/01/10 17:23:24 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <ctype.h>
#include <unistd.h>

int	main(void)
{
	char	c = 'h';
	char	r0 = toupper(c);
	char	r1 = ft_toupper(c);

	write(1, &r0, 1);
	write(1, &r1, 1);
	return (0);
}*/
