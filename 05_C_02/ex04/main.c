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

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

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
