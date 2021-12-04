/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:42:23 by lloko             #+#    #+#             */
/*   Updated: 2021/12/04 20:39:56 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int	myprint(const char *s, va_list ap)
{
	if (*s == 'c')
		return (print_char(va_arg(ap, int)));
	else if (*s == 's')
		return (print_string(va_arg(ap, char *)));
	// else if (*s == 'p')
	// 	return (print_pointer(va_arg(ap, unsigned long)));
	else if (*s == 'd' || *s == 'i')
		return (print_base10_int(va_arg(ap, int)));
	else if (*s == 'u')
	 	return (print_unsigned_int(va_arg(ap, unsigned int)));
	// else if (*s == 'x')
	// 	return (print_base16_lower(va_arg(ap, unsigned int)));
	// else if (*s == 'X')
	// 	return (print_base16_upper(va_arg(ap, unsigned int)));
	// else if (*s == '%')
	// 	return (print_percent(va_arg(ap, char)));
	 return (0);
 }

int	parser(const char *str, va_list ap)
{
	int	i;

	i = 0;
	while(*str)
	{
		if (*str == '%')
		{
			str++;
			i += myprint(str, ap);
		}
		else
		{
			print_char(*str);
			i++;
		}
		str++;
	}
	return (i);
}

//printf("dfkhsghkhdjl %d\n", 42);
//int k = printf

int	ft_printf(const char *in, ...)
{
	int k;
	va_list ap;

	va_start(ap, in);
	k = parser(in, ap);
	va_end(ap);
	return (k);
}

int main()
{
	//char der = 'e';
	//char dsr[] = "rlgjfgdf";
	//int a = ft_printf("%s\n", dsr);
	//ft_printf("%d", -2147483648);
	int a = printf("%u\n", 567677657767);
	int b = ft_printf("%u\n", 567677657767);
	printf("%d\n", a);
	//int k = ft_printf("%c\n", der);
	ft_printf("%d\n", b);
}