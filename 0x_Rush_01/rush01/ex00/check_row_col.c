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

int	check_col_up(int solution[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	blocks;

	i = -1;
	max = 0;
	blocks = 0;
	if (pos / 4 == 3)
	{
		while (++i < 4)
		{
			if (solution[i][pos % 4] > max)
			{
				max = solution[i][pos % 4];
				blocks++;
			}
		}
		if (entry[pos % 4] != blocks)
			return (1);
	}
	return (0);
}

int	check_col_down(int solution[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	blocks;

	i = 4;
	max = 0;
	blocks = 0;
	if (pos / 4 == 3)
	{
		while (--i >= 0)
		{
			if (solution[i][pos % 4] > max)
			{
				max = solution[i][pos % 4];
				blocks++;
			}
		}
		if (entry[4 + pos % 4] != blocks)
			return (1);
	}
	return (0);
}

int	check_row_left(int solution[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	blocks;

	i = -1;
	max = 0;
	blocks = 0;
	if (pos % 4 == 3)
	{
		while (++i < 4)
		{
			if (solution[pos / 4][i] > max)
			{
				max = solution[pos / 4][i];
				blocks++;
			}
		}
		if (entry[8 + pos / 4] != blocks)
			return (1);
	}
	return (0);
}

int	check_row_right(int solution[4][4], int pos, int entry[16])
{
	int	i;
	int	max_size;
	int	blocks;

	i = 4;
	max_size = 0;
	blocks = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (solution[pos / 4][i] > max_size)
			{
				max_size = solution[pos / 4][i];
				blocks++;
			}
		}
		if (entry[12 + pos / 4] != blocks)
			return (1);
	}
	return (0);
}
