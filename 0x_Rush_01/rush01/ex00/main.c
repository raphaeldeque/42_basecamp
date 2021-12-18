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
#include <stdio.h>
#include <stdlib.h>

int		solve(int solution[4][4], int entry[16], int pos);
void	display_solution(int solution[4][4]);

int	check_arguments(int argc, char **argv)
{
	int	counter;

	counter = 0;
	while (argv[1][counter] != '\0')
		counter++;
	if (argc != 2 || counter != 31)
		return (1);
	return (0);
}

int	*treat_entry(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16);
	if (!tab)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '1' && str[i] <= '4')
			tab[j++] = str[i] - 48;
	return (tab);
}

int	main(int argc, char **argv)
{
	int	solution[4][4];
	int	*entry;

	if (check_arguments(argc, argv) != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	entry = treat_entry(argv[1]);
	if (solve(solution, entry, 0) == 1)
		display_solution(solution);
	else
		write(1, "Error\n", 6);
	return (0);
}
