/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:17:02 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/15 16:31:43 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

// int main()
// {
//     int x = 11;
//     int y = 2;
//     int z = 0;
//     int a = 0;

//     ft_div_mod(x,y,&z,&a);

//     char zz = z + '0';
//     char aa = a + '0';
//     write(1,&zz,1);
//     write(1,&aa,1);
//     return (0);
// }