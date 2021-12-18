#include <unistd.h> 
#include <stdio.h> 

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	char	a;

	if (nb > 9)
		ft_putnbr(nb / 10);
	a = nb % 10 + '0';
	write(1, &a, 1);
}

void	ft_print_combn(int n)
{
	int	tab[n];
	int	i;
	int	max;
	int	change;

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (i++ < n)
		tab[i] = i;
	while (i > 0)
	{
		i = -1;
		while (++i < n)
			ft_putnbr(tab[i]);
		max = 9;
		while (i--)
		{
			change = tab[i];
			if (change <= --max)
			{
				tab[i++] = ++change;
				write(1, ", ", 2);
				break ;
			}
		}
	}
}
