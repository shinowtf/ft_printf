/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:14:07 by lkah-chu          #+#    #+#             */
/*   Updated: 2024/04/03 14:50:57 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
	return (i);
}

int	ft_printnbr(int num)
{
	int		i;
	char	*number;

	i = 0;
	number = ft_itoa(num);
	i = ft_printstr(number);
	free(number);
	return (i);
}

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}
