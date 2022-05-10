/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilyes@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:25:42 by ilyes             #+#    #+#             */
/*   Updated: 2022/05/10 14:58:42 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include "includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	char			c = 'c';
	char			*str = "str";
	int				integ = 5;
	unsigned int	unteg = 123;

	      printf("->  taille = %d\n", printf("Base c = [%c] / s = [%s] / p = [%p] / d = [%d] / i = [%i] / u = [%u] / x = [%x] / X = [%X] / %% = [%%]\n", c, str, str, integ, integ, unteg, unteg, unteg));
	ft_printf("->  taille = %d\n", ft_printf("Base c = [%c] / s = [%s] / p = [%p] / d = [%d] / i = [%i] / u = [%u] / x = [%x] / X = [%X] / %% = [%%]\n", c, str, str, integ, integ, unteg, unteg, unteg));
	printf("===========================\n");
	      printf("->  taille = %d\n", printf("[#] #c = [%#c] / #s = [%#s] / #p = [%#p] / #d = [%#d] / #i = [%#i] / #u = [%#u] / #x = [%#x] / #X = [%#X]\n", c, str, str, integ, integ, unteg, unteg, unteg));
	ft_printf("->  taille = %d\n", ft_printf("[#] #c = [%#c] / #s = [%#s] / #p = [%#p] / #d = [%#d] / #i = [%#i] / #u = [%#u] / #x = [%#x] / #X = [%#X]\n", c, str, str, integ, integ, unteg, unteg, unteg));
	printf("===========================\n");
		      printf("->  taille = %d\n", printf("[ ]  c = [% c] /  s = [% s] /  p = [% p] /  d = [% d] /  i = [% i] /  u = [% u] /  x = [% x] /  X = [% X] / % % = [% %]\n", c, str, str, integ, integ, unteg, unteg, unteg));
	ft_printf("->  taille = %d\n", ft_printf("[ ]  c = [% c] /  s = [% s] /  p = [% p] /  d = [% d] /  i = [% i] /  u = [% u] /  x = [% x] /  X = [% X] / % % = [% %]\n", c, str, str, integ, integ, unteg, unteg, unteg));
	printf("===========================\n");
		      printf("->  taille = %d\n", printf("[+] +c = [%+c] / +s = [%+s] / +p = [%+p] / +d = [%+d] / +i = [%+i] / +u = [%+u] / +x = [%+x] / +X = [%+X] / %+% = [%+%]\n", c, str, str, integ, integ, unteg, unteg, unteg));
	ft_printf("->  taille = %d\n", ft_printf("[+] +c = [%+c] / +s = [%+s] / +p = [%+p] / +d = [%+d] / +i = [%+i] / +u = [%+u] / +x = [%+x] / +X = [%+X] / %+% = [%+%]\n", c, str, str, integ, integ, unteg, unteg, unteg));
	return (0);
}