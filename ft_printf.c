/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:05:03 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/26 20:30:18 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myprintf.h"
/*#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>*/

static int	ft_printf_format(char specifer);

int	ft_printf(const char *format, ...)
{
	va_list variadic;
	int		count;
	int		i;

	count = 0;
	//i = 0;
	va_start(variadic, format);
	while (format[count])
	{
		if (format[count] == '%')
			i += ft_printf_format(format[count + 1]);
		write(1, &format[count], 1);
		i++;
		count++;
	}
	va_end(variadic);
	return (i);
}
static int	ft_printf_format(char specifer)
{
	if (specifer == 'd' || specifer == 'i')
		// putnbr
}
/*
int main ()
{
	int i;
	i = ft_printf("hola");
	printf("%d", i);
	return 0;
}
*/
