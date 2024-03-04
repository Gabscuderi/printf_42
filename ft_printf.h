/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:07:59 by gscuderi          #+#    #+#             */
/*   Updated: 2024/03/04 22:11:28 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//stdarg lib with va_list, and the 3 macros va_start va_arg e va_end

#ifndef MYPRINTF_H
# define MYPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *str, int fd);
int	ft_putnbr_fd(long long nbr, int fd);
int	ft_putnbr_base(unsigned int nbr, char *baseSymbols);
int	ft_putptr(unsigned long * address);

#endif
