/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:40:32 by sgarigli          #+#    #+#             */
/*   Updated: 2024/01/10 17:21:32 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif
# include <fcntl.h>
# include "../libft.h"

typedef enum e_bool
{
	TRUE = 0,
	FALSE = 1,
	ERROR = -1
}	t_bool;

char	*get_next_line(int fd);
char	*ft_readbuff(char *sta_str, int fd);
t_bool	ft_feedline(char *s);
char	*ft_newstrjoin(char *sta_str, char *buf);
char	*ft_dstset(char *sta_str);
char	*ft_stastrset(char *sta_str);

#endif