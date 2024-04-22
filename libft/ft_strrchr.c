/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:35:49 by sgarigli          #+#    #+#             */
/*   Updated: 2024/01/10 17:23:13 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main (void)
{
        const char str[] = "mamma mia bella ciao !";
        const char ch = '\0';

        printf("String after |%c| is - |%s|\n", ch, strrchr(str, ch));
        printf("String after |%c| is - |%s|\n", ch, ft_strrchr(str, ch));
        return(0);
}*/
