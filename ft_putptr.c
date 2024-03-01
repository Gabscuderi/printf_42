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

static int	print_nbr(unsigned long nbr, char *Symbols, int base);

int	ft_putptr(unsigned long * address)
{
	char	*baseSymbols;
	int		base;
	int		count;

	baseSymbols = "0123456789abcdef";
	base = 16;
	count = 0;
	if (address == 0)
		count += (ft_putstr_fd("nul_str", 1));
	count += ft_putstr_fd("0x", 1);
	count += print_nbr(address, baseSymbols, base);
	return (count);
}

static int	print_nbr(unsigned long nbr, char *Symbols, int base)
{
	int		count;

	count = 0;
	if (nbr >= base)
		print_nbr(nbr / base, Symbols, base);
	count += ft_putchar_fd(Symbols[nbr % base], 1);
	return (count);
}
