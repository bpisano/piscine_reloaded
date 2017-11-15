/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpisano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:19:13 by bpisano           #+#    #+#             */
/*   Updated: 2017/11/07 16:33:14 by bpisano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *str, int fd)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

void	read_file(char *file)
{
	int		fd;
	int		cursor;
	char	buff[4096];

	fd = open(file, O_RDONLY);
	while ((cursor = read(fd, buff, 4096)))
	{
		buff[cursor] = '\0';
		ft_putstr_fd(buff, 1);
	}
}

int		main(int ac, char **av)
{
	if (ac > 2)
	{
		ft_putstr_fd("Too many arguments.\n", 2);
		return (0);
	}
	if (ac < 2)
	{
		ft_putstr_fd("File name missing.\n", 2);
		return (0);
	}
	read_file(av[1]);
	return (0);
}
