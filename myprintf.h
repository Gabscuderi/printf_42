/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:07:59 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/28 00:19:55 by gscuderi         ###   ########.fr       */
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
int	ft_putnbr_fd(int nbr, int fd);
int	ft_putnbr_base(int nbr, char *baseSymbols);

#endif
