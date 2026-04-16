/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 14:25:01 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/16 14:56:16 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    while(*str)
    {
        write(1,str,1);
        str++;
    }
}

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

void swap(char **a, char **b)
{
    char *temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char **argv)
{
    int i = 0;
    int str_i = 0;
    char *temp; 

    if (argc > 0)
    {
        
    }
}