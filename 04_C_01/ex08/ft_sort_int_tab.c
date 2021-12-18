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

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	steps;
	int	tmp;
	int	i;

	steps = size;
	while (steps > 0)
	{
		i = -1;
		while (++i < steps -1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = tmp;
			}
		}
		steps--;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[] = {4, -8, 20, 5, 0};
	int i;

	i =-1;
	while (++i < 5)
		printf("%d ", tab[i]);
	printf(" before\n");

	ft_sort_int_tab(tab, 5);

	i = -1;
	while (++i < 5)
		printf("%d ", tab[i]);
	printf(" sorted\n");

	return (0);
}
*/