/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:51:41 by sgarigli          #+#    #+#             */
/*   Updated: 2024/01/10 17:21:15 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft.h"

int		ft_print_args(va_list args, const char i);
int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(const char *str);
int		ft_freeputstr(const char *str);
char	*ft_uitoa(unsigned int n);
int		ft_printf_pointer(unsigned long int ptr);
int		ft_printf_hex(unsigned long num, const char i);

#endif
