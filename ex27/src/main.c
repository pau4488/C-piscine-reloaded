/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:59:48 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/04/25 20:24:07 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	perror(int argc);

int	main(int argc, char **argv)
{
	int		fd;
	char	c[1];

	if (perror(argc))
		return (1);
	fd = open (argv[1], O_RDONLY);
	if (fd == -1)
	{
		write (1, "Cannot read file.", 17);
		return (1);
	}
	else
	{
		while (read (fd, c, 1))
			write (1, &c, 1);
	}
	if (close (fd) == -1)
		return (1);
	return (0);
}

int	perror(int argc)
{
	if (argc == 1)
	{
		write (1, "File name missing.", 18);
		return (1);
	}
	else if (argc > 2)
	{
		write (1, "Too many arguments.", 19);
		return (1);
	}
	return (0);
}
