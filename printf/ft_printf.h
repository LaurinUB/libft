/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:11:53 by luntiet-          #+#    #+#             */
/*   Updated: 2022/11/08 10:42:50 by luntiet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../libft.h"
# include <stdint.h>

int		ft_printf(const char *fmtt, ...);
int		ft_parse(va_list arg, const char *fmt, int i);
int		ft_print_str(va_list arg);
int		ft_print_int(va_list arg);
int		ft_print_dec(va_list arg);
int		ft_print_chr(va_list arg);
int		ft_print_ptr(va_list arg);
int		ft_print_x(va_list arg);
int		ft_print_bigx(va_list arg);
int		ft_counthex(int ptr, int count);
void	ft_puthex(long long hex, int istoupper);
int		ft_print_udec(va_list arg);

#endif
