/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:43:49 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/27 19:43:49 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myprintf.h"

int	ft_putnbr_fd(long long nbr, int fd)
{
	int	digit;
	int	count;

	count = 0;
	if (nbr == -2147483648)
		count += ft_putstr_fd("-2147483648", fd);
	else if (nbr < 0)
	{
		count += ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	else if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
		count += ft_putchar_fd(nbr + 48, fd);
	return (count);
}