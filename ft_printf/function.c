/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:56:33 by lloko             #+#    #+#             */
/*   Updated: 2021/12/04 20:49:28 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_string(char *str)
{
	int	i;

	i = 0;
	if(!str)
		return (print_string("NULL"));
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	print_pointer(unsigned long n, char *base)
{
	int	i;

	i = 0;
	if (n >= 16)
		i = print_pointer(n / 16, base);
	i++;
	base 	
}

int	print_base10_int(int n)
{
	int len;
	char *rez_itoa;

	rez_itoa = ft_itoa(n);
	len = ft_strlen(rez_itoa);
	write(1, rez_itoa, len);
	free(rez_itoa);
	return (len);	
}

int	print_unsigned_int(unsigned int n)
{
	int len;
	char *rez_utoa;

	rez_utoa = ft_utoa(n);
	len = ft_strlen(rez_utoa);
	write(1, rez_utoa, len);
	free(rez_utoa);
	return (len);
}

/* int main()
{
	//char c = '%';
	char s[] = "glfkg fgdfgfd gdfgb fgfdg";
	//print_char(c);
	print_string(s);
	//int i = printf("%%\n");
	//printf("%d\n", i);
} */