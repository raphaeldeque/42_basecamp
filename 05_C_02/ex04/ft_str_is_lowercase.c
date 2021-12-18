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

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char num[] = "598680";

	int res;
	res = ft_str_is_lowercase(alpha);
	printf("%s: %d\n", alpha, res);
	res = ft_str_is_lowercase(empty);
	printf("%s: %d\n", empty, res);
	res = ft_str_is_lowercase(num);
	printf("%s: %d\n", num, res);

}
*/