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

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 99)
	{
		y = x;
		while (y <= 99)
		{
			if (x != y)
			{
				ft_putnbr(x);
				write(1, " ", 1);
				ft_putnbr(y);
				if (x != 98 || y != 99)
					write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}

void	ft_putnbr(int n)
{
	char	a;
	char	b;

	a = n / 10 + '0';
	b = n % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}

/*
void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/