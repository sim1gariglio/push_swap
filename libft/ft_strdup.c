/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:30:34 by sgarigli          #+#    #+#             */
/*   Updated: 2024/01/10 17:22:53 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	l_s;
	char	*res;

	i = 0;
	l_s = 0;
	while (s[l_s])
		l_s++;
	if (l_s == 0)
		res = (char *)malloc(1 * sizeof(char));
	else
		res = (char *)malloc((l_s + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s[] = "maremma ciuca";

//	printf("corretto : %s\n", strdup(s));
	printf("%p\t%p\n", s, ft_strdup(s));
	printf("mio : %s\n", ft_strdup(s));
	return (0);
}*/
