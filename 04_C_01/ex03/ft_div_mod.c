/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   			                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/00 00:00:00 by coder             #+#    #+#             */
/*   Updated: 2021/12/00 00:00:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 40;
	b = 11;
	div = malloc(sizeof(int));
	mod = malloc(sizeof(int));
	ft_div_mod(a, b, div, mod);
	printf("a: %d\nb: %d\ndiv: %p\n*div: %d\nmod: %p\n*mod: %d\n",
			a, b, div, *div, mod, *mod);
	return (0);
}
*/