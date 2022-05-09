/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilyes@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:25:42 by ilyes             #+#    #+#             */
/*   Updated: 2022/05/05 17:32:09 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	char			c = 'c';
	char			*str = "pest";
	int				integ = 5;
	unsigned int	unteg = 123;

	// printf("d = [%d]\n", integ);
	// printf("#d = [%#d] /  #i = [%#i] / #u = [%#u] / #x = [%#x] / #X = [%#X]\n", integ, integ, integ, integ, integ);
	// printf("d = [%d] /  i = [%i] / u = [%u] / x = [%x] / X = [%X]\n", integ, integ, integ, integ, integ);
	// printf("+d = [%+d] /  +i = [%+i] / +u = [%+u] / +x = [%+x] / +X = [%+X]\n", integ, integ, integ, integ, integ);

	printf("  ->  taille = %d\n", printf("%%%%Test c = %c / s = %s / p = %p / d = %d / i = %i / u = %u / x = %x / X = %X / %% = %%\n", c, str, str, integ, integ, unteg, unteg, unteg));
	ft_printf("  ->  taille = %d\n", ft_printf("%%%%Test c = %c / s = %s / p = %p / d = %d / i = %i / u = %u / x = %x / X = %X / %% = %%\n", c, str, str, integ, integ, unteg, unteg, unteg));

	// ft_printf("  ->  taille = %d\n", ft_printf("d = [%d] / #d = [%#d] /  #i = [%#i] / #u = [%#u] / #x = [%#x] / #X = [%#X]\n", integ, integ, integ, integ, integ, integ));
	// printf("  ->  taille = %d\n", printf("d = [%d] && c = [%c] /  c = [% c] /  s = [% s] /  p = [% p] /  d = [% d] /  i = [% i] /  u = [% u] /  x = [% x] /  X = [% X]\n", integ, c, c, str, str, integ, integ, integ, integ, integ));
	// ft_printf("  ->  taille = %d\n", ft_printf("d = [%d] && c = [%c] /  c = [% c] /  s = [% s] /  p = [% p] /  d = [% d] /  i = [% i] /  u = [% u] /  x = [% x] /  X = [% X]\n", integ, c, c, str, str, integ, integ, integ, integ, integ));

	printf("  ->  taille = %d\n", printf("d = [%d] / 5d = [%5d] / -5d = [%-5d] /  05d = [%05d] / .5d = [%.5d]\n", integ, integ, integ, integ, integ));
	printf("  ->  taille = %d\n", printf("c = [%c] / 5c = [%5c] / -5c = [%-5c] /  05c = [%05c] / .5c = [%.5c]\n", c, c, c, c, c));



	return (0);
}