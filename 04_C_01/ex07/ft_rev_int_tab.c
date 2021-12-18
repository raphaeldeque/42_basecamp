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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	first;
	int	half;
	int	last;

	i = 0;
	half = size / 2;
	while (i < half)
	{
		last = size - 1;
		first = tab[i];
		tab[i] = tab[last];
		tab[last] = first;
		i++;
		size--;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int i;

	tab = calloc(10, sizeof(int));
	i = -1;
	while (++i < 10)
		tab[i] = i;
	i =-1;
	while (++i < 10)
		printf("%d ", tab[i]);

	printf("\n");
	ft_rev_int_tab(tab, 10);

	i = -1;
	while (++i < 10)
		printf("%d ", tab[i]);
	printf("\n\n");

	tab[0] = 0;
	tab[1] = 8;
	tab[2] = 2;
	tab[3] = 1;
	i =-1;
	while (++i < 4)
		printf("%d ", tab[i]);
	printf("\n");
	ft_rev_int_tab(tab, 4);

	i =-1;
	while (++i < 4)
		printf("%d ", tab[i]);
	
	return (0);
}
*/