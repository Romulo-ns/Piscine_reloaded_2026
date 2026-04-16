/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:47:51 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/16 19:41:37 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		n;
	char	c;

	n = 0;
	while (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
		n++;
	}
}

// int main(){
//     ft_print_numbers();
//     return (0);
// }