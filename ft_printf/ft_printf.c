/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:42:23 by lloko             #+#    #+#             */
/*   Updated: 2021/11/28 18:06:03 by lloko            ###   ########.fr       */
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
		return 
	else if (*s == 'd' || *s == 'i')
		return 
	else if (*s == 'u')
		return  
	else if (*s == 'x')
		return 
	else if (*s == 'X')
		return 
	else if (*s == '%')
		return 
	return (0);
}

int	ft_printf(const char *in, ...)
{
	va_start(ap, in);
	va_end(ap);
}
