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

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{	
	char alpha[] = "abracadabra";
	char empty[] = "";
	char num[1] = {63};

	int res;
	res = ft_str_is_printable(alpha);
	printf("%s: %d\n", alpha, res);
	res = ft_str_is_printable(empty);
	printf("%s: %d\n", empty, res);
	res = ft_str_is_printable(num);
	printf("%c: %d\n", num[0], res);

}
*/