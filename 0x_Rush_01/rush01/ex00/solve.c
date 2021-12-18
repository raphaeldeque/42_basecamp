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

int	check_double(int solution[4][4], int pos, int num);
int	check_case(int solution[4][4], int pos, int entry[16]);

int	solve(int solution[4][4], int entry[16], int pos)
{
	int	size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		if (check_double(solution, pos, size) == 0)
		{
			solution[pos / 4][pos % 4] = size;
			if (check_case(solution, pos, entry) == 0)
			{
				if (solve(solution, entry, pos + 1) == 1)
					return (1);
			}
			else
				solution[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}
