/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:15:41 by lloko             #+#    #+#             */
/*   Updated: 2021/12/04 19:45:23 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_print_pointer(unsigned long n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count = ft_print_pointer(n / 16, base);
	count++;
	ft_putchar(base[n % 16]);
	n /= 16;
	return (count);
}

/* #include <stdio.h>
int main()
{
	int a;
	a = ft_print_pointer(17, "01234567890abcdef");
	printf("%X\n", a);
	//printf("%x\n", a);
} */