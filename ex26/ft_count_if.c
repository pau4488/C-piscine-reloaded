int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while(tab[i])
	{
		if(f(tab[i][0]))
			nb++;
		i++;
	}
	return(nb);
}
