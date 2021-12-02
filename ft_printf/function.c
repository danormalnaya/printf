/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:44:46 by lloko             #+#    #+#             */
/*   Updated: 2021/12/02 23:13:05 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_string(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return print_string("NULL");
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (1);
}
int main()
{
	//char c = '%';
	//char s[] = "rgfgbgbfgbfgrtg fvfdvd";
	//print_char(c);
	//print_string(s);
	print_string();
	//printf("%s", NULL);
}