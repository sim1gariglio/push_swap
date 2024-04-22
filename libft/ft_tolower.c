/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:59:53 by sgarigli          #+#    #+#             */
/*   Updated: 2024/01/10 17:23:21 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <ctype.h>
#include <unistd.h>

int     main(void)
{
        char    c = 'Z';
        char    r0 = tolower(c);
        char    r1 = ft_tolower(c);

        write(1, &r0, 1);
        write(1, &r1, 1);
        return (0);
}*/
