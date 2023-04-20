/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 23:12:53 by pbrossa-          #+#    #+#             */
/*   Updated: 2023/04/13 23:12:53 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while(tab[i])
	{
		if(f(tab[i][0]))
			nb++;
		i++;
	}
	return(nb);
}
