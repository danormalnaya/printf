/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:32:38 by lloko             #+#    #+#             */
/*   Updated: 2021/12/08 18:29:21 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main()
{
	int a = 'a';
	ft_printf("%c\n", a);
	int b = ft_printf("%s\n", "rlgjuuuuuuuuuuuufgdf iuiuyuiy");
	ft_printf("%d\n", b);
	printf("%d\n", b);
	int c = ft_printf("%p\n", 5623175712);
	ft_printf("%d\n", c);
	printf("%d\n", c);
	int d = ft_printf("%d\n", -41238897);
	ft_printf("%d\n", d);
	printf("%d\n", d);
	int e = ft_printf("%i\n", 41238897);
	ft_printf("%d\n", e);
	printf("%d\n", e);
	int f = ft_printf("%i\n", 41238897);
	ft_printf("%d\n", f);
	printf("%d\n", f);
	int g = ft_printf("%u\n", 41238897);
	ft_printf("%d\n", g);
	printf("%d\n", g);
	int h = ft_printf("%x\n", 175175);
	ft_printf("%d\n", h);
	printf("%d\n", h);
	int j = ft_printf("%X\n", 175175);
	ft_printf("%d\n", j);
	printf("%d\n", j);
	int k = ft_printf("%%%\n");
	ft_printf("%d\n", k);
	printf("%d\n", k);
	int n = ft_printf("%p\n", 234);
	ft_printf("%d\n", n);
	printf("%d\n", n);
}