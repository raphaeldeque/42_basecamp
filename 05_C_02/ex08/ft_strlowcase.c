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

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int main(void)
{	
	char alpha[] = "ALOHA";
	char empty[] = "8 * 0)(";
	char text[] = "42 bOrn to BE rooT 12345";

	char *res;
	res = ft_strlowcase(alpha);
	printf("%s\n", res);
	res = ft_strlowcase(empty);
	printf("%s\n", res);
	res = ft_strlowcase(text);
	printf("%s\n", res);

}
*/