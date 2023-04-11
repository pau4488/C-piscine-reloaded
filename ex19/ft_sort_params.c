/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:04:24 by marvin            #+#    #+#             */
/*   Updated: 2023/04/11 21:04:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

//void	ft_sort_params(int argc, char **argv);
void    ft_print_args(int argc, char **argv);
int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	char**  str = (char**)malloc(3 * sizeof(char*));
	str[0] = "Hola";
	str[1] = "Mundo";

	ft_print_args(argc, argv);
	return(0);
}

/*void    ft_sort_params(int argc, char **argv)
{
	int	i;
	char	*temp;

	i = 1;
	temp = malloc(255 * siseof(char));
	while(i < argc)
	{
		if(*argv[i] > *argv[i + 1])
		{
			temp = *artv[i];
			*argv[i] = *argv[i + 1];
			*argv[i + 1] = temp;
		}
		i++;
	}
}*/

void    ft_print_args(int argc, char **argv)
{
	int	i;
	int	len;

	i = 1;
	len = 0;
	while(i < argc)
	{
		len = ft_strlen(argv[i]);
		write(1, argv[i++], len);
		write(1, "\n", 1);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(*str)
	{
		str++;
		i++;
	}
	return(i);
}
