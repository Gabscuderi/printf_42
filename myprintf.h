/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:07:59 by gscuderi          #+#    #+#             */
/*   Updated: 2024/02/26 20:30:24 by gscuderi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//stdarg lib with va_list, and the 3 macros va_start va_arg e va_end

#ifndef MYPRINTF_H
# define MYPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);

#endif
