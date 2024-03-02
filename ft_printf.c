/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:05:03 by gscuderi          #+#    #+#             */
/*   Updated: 2024/03/02 21:09:15 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myprintf.h"

static int	ft_printf_format(char specifier, va_list variadic);

int	ft_printf(const char *format, ...)
{
	va_list	variadic;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(variadic, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_printf_format(format[i + 1], variadic);
			i += 2;
		}
		else
		{
			write(1, &format[i], 1);
			i++;
			count++;
		}
	}
	va_end(variadic);
	return (count);
}

static int	ft_printf_format(char specifier, va_list variadic)
{
	int	count;

	count = 0;
	if (specifier == '%')
		count += ft_putchar_fd('%', 1);
	else if (specifier == 'c')
		count += ft_putchar_fd((char)va_arg(variadic, int), 1);
	else if (specifier == 's')
		count += ft_putstr_fd(va_arg(variadic, char *), 1);
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr_fd(va_arg(variadic, int), 1);
	else if (specifier == 'u')
		count += ft_putnbr_fd(va_arg(variadic, unsigned int), 1);
	else if (specifier == 'x')
		count += ft_putnbr_base(va_arg(variadic, int), "0123456789abcdef");
	else if (specifier == 'X')
		count += ft_putnbr_base(va_arg(variadic, int), "0123456789ABCEDF");
	else if (specifier == 'p')
		count += ft_putptr(va_arg(variadic, unsigned long *));
	return (count);
}


// int main ()
// {
// 	int i;
// 	int j;

// 	j = printf("yo soy %d", 23);
// 	i = ft_printf("yo soy %d", 23);

// 	printf("%d", j);
// 	ft_printf("%d", i);
// 	return 0;
// }

