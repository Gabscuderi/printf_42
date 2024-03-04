/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:22:45 by gscuderi          #+#    #+#             */
/*   Updated: 2024/03/04 22:11:01 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//prima cosa quanti sono i simboli == base value, e controllo dei + - annessi
//check se non si ripetono i simboli, check se la base è almeno due
//poi chiamo un altra funzione simile a putnbr solo che non divide per 10 ma
//per la base che gli passo
//print_nbr è dove avviene il vero cambio di base
//se maggiore della base, ricorsiva divedendo per base (mi sposto a sx di n)
//se minore della base, stampo il resto del modulo
//semplicemente usando il resto come indice della stringa di simboli

#include "ft_printf.h"

static int	double_char(char *symbols);
static int	print_nbr(unsigned int nbr, char *Symbols, unsigned int base);

int	ft_putnbr_base(unsigned int nbr, char *baseSymbols)
{
	unsigned int	base;
	int	count;

	count = 0;
	base = 0;
	while (baseSymbols[base])
	{
		if (baseSymbols[base] == '+' || baseSymbols[base] == '-')
			return (0);
		++base;
	}
	if (base < 2)
		return (0);
	if (double_char(baseSymbols))
		return (0);
	count += print_nbr(nbr, baseSymbols, base);
	return (count);
}

static int	double_char(char *Symbols)
{
	int	i;
	int	j;

	i = 0;
	while (Symbols[i])
	{
		j = i + 1;
		while (Symbols[j])
		{
			if (Symbols[i] == Symbols[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	print_nbr(unsigned int nbr, char *Symbols, unsigned int base)
{
	int		count;

	count = 0;
	if (nbr >= base)
		count += print_nbr(nbr / base, Symbols, base);
	count += ft_putchar_fd(Symbols[nbr % base], 1);
	return (count);
}
