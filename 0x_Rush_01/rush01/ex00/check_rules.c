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

int	check_col_up(int solution[4][4], int pos, int entry[16]);
int	check_col_down(int solution[4][4], int pos, int entry[16]);
int	check_row_left(int solution[4][4], int pos, int entry[16]);
int	check_row_right(int solution[4][4], int pos, int entry[16]);

int	check_double(int solution[4][4], int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos / 4)
		if (solution[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
		if (solution[pos / 4][i] == num)
			return (1);
	return (0);
}

int	check_case(int solution[4][4], int pos, int entry[16])
{
	if (check_row_left(solution, pos, entry) == 1)
		return (1);
	if (check_row_right(solution, pos, entry) == 1)
		return (1);
	if (check_col_down(solution, pos, entry) == 1)
		return (1);
	if (check_col_up(solution, pos, entry) == 1)
		return (1);
	return (0);
}
