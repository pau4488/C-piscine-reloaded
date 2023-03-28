int	ft_iterative_factorial(int nb)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while(i <= nb)
	{
		if((n * i) < sizeof(int) || (n * i) < 0)
			return (0);
		n = n * i;
		i++;
	}
	return(n);
}
