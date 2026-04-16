/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:25:16 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/15 14:35:54 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    if (n >= 0)
    {
        write(1,"P",1);  
    }
    else 
    {
        write(1,"N",1); 
    }
}

// int main()
// {
//     int a = 1;
//     int b = 0;
//     int c = -1;

//     ft_is_negative(a);
//     ft_is_negative(b);
//     ft_is_negative(c);
//     return (0);
// }