/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:55:08 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/03/30 17:31:57 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	i;

	n = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		if ((n * i) > 2147483647)
			return (0);
		n = n * i;
		i++;
	}
	return (n);
}
