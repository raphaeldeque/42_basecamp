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

void	ft_putnbr(int n);

void	ft_print_combn(int n)
{
	int tab[n];
	int	i;

	if (n > 0 && n < 10)
	{
		i = -1;
		while (i++ < n)
			tab[i] = i;
		i = 0;
		while (i < n)//(tab[n+i] != '\0')
		{
			ft_putnbr(tab[i]);
			i++;
		}
		// i = n
		//while (p-)


			//if (x != y)
			//ft_print_comb2(n);
			
			//write(1, " ", 1);
			//ft_putnbr(tab[i]);
			//write(1, " ", 1);
			
			//if (x != 98 || y != 99)
			write(1, ", ", 2);
		
		
	}
}


void	ft_putnbr(int nb)
{
	char	a;

	if (nb > 9)
		ft_putnbr(nb / 10);
	a = nb % 10 + '0';
	write(1, &a, 1);
}
