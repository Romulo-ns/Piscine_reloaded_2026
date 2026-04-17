/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 11:59:42 by romdo-na          #+#    #+#             */
/*   Updated: 2026/04/17 13:09:24 by romdo-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_display_file(char *file)
{
	int		fd;
	int		bytes;
	char	buffer[1024];

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Cannot read file.\n");
		return ;
	}
	bytes = read(fd, buffer, 1024);
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(fd, buffer, 1024);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (ft_putstr("File name missing.\n"), 1);
	if (argc > 2)
		return (ft_putstr("Too many arguments.\n"), 1);
	ft_display_file(argv[1]);
	return (0);
}
