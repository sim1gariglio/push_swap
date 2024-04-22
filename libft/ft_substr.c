/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:12:05 by sgarigli          #+#    #+#             */
/*   Updated: 2024/01/10 17:23:17 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;
	size_t	l_s;

	i = 0;
	l_s = 0;
	while (s[l_s])
		l_s++;
	if (start >= l_s)
		len = 0;
	else if (start < l_s && len > l_s - start)
		len = l_s - start;
	else if (l_s < len)
		len = l_s;
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (i < len && s[i + start])
	{
		dst[i] = s[i + start];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_substr("0123456789", 9, 10));
//	printf("%s\n", ft_substr("QuestaFraseHa24Caratteri", 24, 24));
	return (0);
}*/
