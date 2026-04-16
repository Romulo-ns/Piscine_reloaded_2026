/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:27:34 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/16 20:07:16 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*str_copy;
	int		i;

	len = 0;
	i = 0;
	while (src[i])
	{
		len++;
		i++;
	}
	str_copy = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (src[i])
	{
		str_copy[i] = src[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}

// int main()
// {
//     char *s1 = "hello";
//     char *s2 = ft_strdup(s1);

//     printf("%s\n", s2);
// }
