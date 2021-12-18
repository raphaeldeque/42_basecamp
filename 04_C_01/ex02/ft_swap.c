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

void	ft_swap(int *a, int *b)
{
	int	number;

	number = *a;
	*a = *b;
	*b = number;
}

/*
#include <stdio.h>

void	ft_swap(int *a, int*b);

int	main(void)
{
	int a;
	int b;

	a = -21;
	b = 30;

	printf("Before function:\na was %d\nb was %d\n", a, b);

	ft_swap(&a, &b);
	
	printf("After:\na is %d\nb is %d\n", a, b);
	return (0);
}
*/