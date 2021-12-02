/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myprintf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:08:09 by lloko             #+#    #+#             */
/*   Updated: 2021/12/02 23:15:43 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
int	myprint(const char *s, va_list ap)
{
	if (*s == 'c')
		return (print_char(va_arg(ap, int)));
	else if (*s == 's')
		return (print_string(va_arg(ap, char *)));
	else if (*s == 'p')
		return (print_pointer(va_arg(ap, unsigned long)));
	else if (*s == 'd' || *s == 'i')
		return (print_base10_int(va_arg(ap, unsigned int)));
	else if (*s == 'u')
		return (print_unsigned_int(va_arg(ap, unsigned int)));
	else if (*s == 'x')
		return (print_base16_lower(va_arg(ap, unsigned int)));
	else if (*s == 'X')
		return (print_base16_upper(va_arg(ap, unsigned int)));
	else if (*s == '%')
		return (print_percent(va_arg(ap, char)));
	return (0);
}

int	ft_printf(const char *in, ...)
{
	va_start(ap, in);
	va_end(ap);
}