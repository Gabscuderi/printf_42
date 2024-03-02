/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:14:15 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/27 19:14:15 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myprintf.h"

int	ft_putstr_fd(char *str, int fd)
{
	int	count;

	count = 0;
	if (!str)
		count += ft_putstr_fd("null_str", fd);
	while (*str)
	{
		count += ft_putchar_fd(*str, fd);
		str++;
	}
	return (count);
}
