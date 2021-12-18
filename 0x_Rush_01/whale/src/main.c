#include "functions.h"

int solve(int tab[4][4], int entry[16], int pos)
{
	ft_putstr("Entra no solve\n");
	int size;
	if (pos == 16)
	{
		ft_putstr("\nSolve retorna 1 (ok) no inicio\n");
		display_solution(tab);
		ft_putchar('\n');
		return (1);
	}
	size = 0;
	ft_putstr("\nSize=0\n");

	while (++size <= 4)
	{
		//checking if the number I want to place is correct
		ft_putstr("\nsize+1 Testa se ja existe\n");
		if (check_double(tab, pos, size) == 0)
		{
			tab[pos / 4][pos % 4] = size;
			ft_putstr("\nAtribui novo valor\n");
			display_solution(tab);

			//checking if the tab is correct with the new number
			ft_putstr("Testa as regras de fora\n");
			if (check_case(tab, pos, entry) == 0)
			{
				//checking for next possibility
				ft_putstr("\nTesta proxima posicao pos+1\n");
				if (solve(tab, entry, pos + 1) == 1)
				{
					ft_putstr("\nSolve retorna 1 (ok) na recursao\n");
					display_solution(tab);
					ft_putchar('\n');
					return (1);
				}
			}
			else
			{
				tab[pos / 4][pos % 4] = 0;
				ft_putstr("Atribui 0\n");
			}
		}
	}
	//did not find any solutions
	return (0);
}

void display_solution(int tab[4][4])
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(tab[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int main(int ac, char **av)
{
	int tab[4][4] = {
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
	};
	int *entry;

	if (check(ac, av) == 1)
		return (0);
	entry = get_numbers(av[1]);

	if (solve(tab, entry, 0) == 1)
		display_solution(tab);
	else
		ft_putstr("Did not find any solutions\n");
	return (0);
}
