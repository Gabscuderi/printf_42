/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:10:16 by gscuderi          #+#    #+#             */
/*   Updated: 2024/03/01 18:10:16 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//devo avere ude funzioni, se ricorsiva putptr -> due volte "0x"

#include "myprintf.h"

static int	print_nbr(unsigned long nbr);

int	ft_putptr(unsigned long *address)
{
	int		count;

	count = 0;
	if (address == 0)
		count += (ft_putstr_fd("nul_str", 1));
	count += ft_putstr_fd("0x", 1);
	count += print_nbr((unsigned long)address);
	return (count);
}

static int	print_nbr(unsigned long nbr)
{
	int		count;
	char 	*Symbols;

	Symbols = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
		print_nbr(nbr / 16);
	count += ft_putchar_fd(Symbols[nbr % 16], 1);
	return (count);
}
