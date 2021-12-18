int check_double(int tab[4][4], int pos, int num)
{
	int i;

	i = -1;
	while (++i < pos / 4)
		if (tab[i][pos % 4] == num)
		{
			ft_putstr("check_double = 1  nao pode (existe na coluna)\n");
			return (1);
		}
	i = -1;
	while (++i < pos % 4)
		if (tab[pos / 4][i] == num)
		{
			ft_putstr("check_double = 1  nao pode (existe na linha)\n");
			return (1);
		}
	ft_putstr("check_double = 0  ok\n");
	return (0);
}

int check_col_up(int tab[4][4], int pos, int entry[16])
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i++;
		}
		if (entry[pos % 4] != count)
		{
			ft_putstr("check_col_up = 1  nao pode\n");
			return (1);
		}
		ft_putstr("check_col_up = 0  ok\n");
		
	}
	else
		ft_putstr("check_col_up = 0  nao da pra testar\n");

	return (0);
}

int check_row_right(int tab[4][4], int pos, int entry[16])
{
	int i;
	int max_size;
	int visible_towers;

	i = 4;
	max_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[pos / 4][i] > max_size)
			{
				max_size = tab[pos / 4][i];
				visible_towers++;
			}
		}
		if (entry[12 + pos / 4] != visible_towers)
		{
			ft_putstr("check_row_right = 1  nao pode\n");
			return (1);
		}
		ft_putstr("check_row_right = 0  ok\n");
	}
	else
		ft_putstr("check_row_right = 0  nao da pra testar\n");
	return (0);
}

int check_col_down(int tab[4][4], int pos, int entry[16])
{
	int i;
	int max;
	int count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i--;
		}
		if (entry[4 + pos % 4] != count)
		{
			ft_putstr("check_col_down = 1  nao pode\n");
			return (1);
		}
		ft_putstr("check_col_down = 0  ok\n");
	}
	ft_putstr("check_col_down = 0  nao da pra testar\n");
	return (0);
}

int check_row_left(int tab[4][4], int pos, int entry[16])
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				count++;
			}
			i++;
		}
		if (entry[8 + pos / 4] != count)
		{
			ft_putstr("check_row_left = 1  nao pode\n");
			return (1);
		}
		ft_putstr("check_row_left = 0  ok\n");
	}
	else
		ft_putstr("check_row_left = 0  nao da pra testar\n");
	return (0);
}

int check_case(int tab[4][4], int pos, int entry[16])
{
	if (check_row_left(tab, pos, entry) == 1)
		return (1);
	if (check_row_right(tab, pos, entry) == 1)
		return (1);
	if (check_col_down(tab, pos, entry) == 1)
		return (1);
	if (check_col_up(tab, pos, entry) == 1)
		return (1);
	ft_putstr("check_case ok\n");
	return (0);
}