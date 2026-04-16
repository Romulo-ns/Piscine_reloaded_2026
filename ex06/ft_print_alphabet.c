/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:52:59 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/15 14:36:08 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void) {

    char l = 97;
    
    while(l <= 122){
        write(1,&l,1);
        l++;
    }
}

// int main() {
//     ft_print_alphabet();
//     return (0);
// }