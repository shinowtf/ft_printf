/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 20:32:08 by lkah-chu          #+#    #+#             */
/*   Updated: 2024/04/03 16:13:53 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H 

# include "../libft/libft.h"
# include <stdarg.h> // va_list, va_start, va_arg, va_end
# include <unistd.h> // write
# include <stdlib.h> // malloc, free
# include <stdint.h> // uintmax_t

int		ft_printf(const char *format, ...);
int		ft_check_formats(va_list args, const char format);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_print_ptr(uintptr_t ptr);
int		ft_printnbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_printpercent(void);

void	ft_putstr(char *str);
void	ft_put_ptr(uintptr_t num);
int		ft_ptr_len(uintptr_t num);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned	int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned	int num);

#endif