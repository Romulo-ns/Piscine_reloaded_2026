/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 13:00:49 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/16 14:26:11 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char *str)
{
    int i = 0;

    while (str[i])
    {
        write(1,&str[i],1);
        i++;
    }
    
}

int main (int argc, char **argv)
{
    int i = 1;
    if (argc > 0)
    {
        while (argv[i])
        {
            ft_putchar(argv[i]);
            write(1,"\n",1);
            i++;
        }
    }
}
