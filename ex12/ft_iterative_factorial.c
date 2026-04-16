/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:34:06 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/15 18:21:49 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int x = nb;

    if (nb < 1 || nb > 12)
    {
        return (0);
    }

    while (nb > 1)
    {
        x *= (nb - 1);
        nb--;
    }
    return (x);
}

int main ()
{
    int x = 5;
    
    x = ft_iterative_factorial(x);
    printf("%i",x);
    return (0);
}