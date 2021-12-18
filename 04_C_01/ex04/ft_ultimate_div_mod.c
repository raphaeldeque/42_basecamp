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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n1;
	int	n2;

	n1 = *a;
	n2 = *b;
	*a = n1 / n2;
	*b = n1 % n2;
}

/*
#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	*a = 42;
	*b = 11;

	printf("Int a&b before\n");
	printf("a: %p\n*a: %d\nb: %p\n*b: %d\n", a, *a, b, *b);
	ft_ultimate_div_mod(a, b);
	printf("\nDiv&mod a&b after\n");
	printf("a: %p\n*a: %d\nb: %p\n*b: %d\n", a, *a, b, *b);
	return (0);
}
*/