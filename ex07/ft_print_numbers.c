/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:47:51 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/16 20:46:38 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int		n;
	char	c;

	n = 0;
	while (n < 10)
	{
		c = n + '0';
		ft_putchar(c);
		n++;
	}
}

// int main(){
//     ft_print_numbers();
//     return (0);
// }