/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:22:26 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/16 13:01:13 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] && s2[i])
    {
        if (s1[i] - s2[i] != 0)
        {
            return(s1[i] - s2[i]);
        }
        i++;
    }
    return(s1[i] - s2[i]);
}

// int main ()
// {
//     printf("%d\n", ft_strcmp("abc", "abb"));
// }