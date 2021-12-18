/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:41:42 by coder             #+#    #+#             */
/*   Updated: 2021/12/05 18:03:28 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	build_line(int x, char first_char, char middle_char, char last_char)
{
	int	i;

	if (x > 0)
	{
		ft_putchar(first_char);
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(middle_char);
			i++;
		}
		if (x > 1)
		{
			ft_putchar(last_char);
		}
	}
}

void	rush(int x, int y)
{
	int j;
	if (x > 0 && y > 0)
	{
	build_line(x, '/', '*', '\\');
	ft_putchar('\n');
	j = 1;
	while (j < y -1)
	{
		build_line(x, '*', ' ', '*');
		ft_putchar('\n');
	j++;
	}
	if (y > 1)
	{
		build_line(x, '\\', '*', '/');
		ft_putchar('\n');
	}
}
}
