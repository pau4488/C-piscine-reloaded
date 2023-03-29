void	ft_sort_params(&argc, &argv);

int	main(int argc, char **argv)
{
	ft_sort_params(&argc, &argv);
}

void    ft_sort_params(&argc, &argv)
{
	int	i;
	char	*temp;

	i = 1;
	temp = malloc(255 * siseof(char));
	while(i < *argv)
	{
		if(*argv[i] > *argv[i + 1])
		{
			temp = *artv[i];
			*argv[i] = *argv[i +1];
			*argv[i + 1] = temp;
		}
		i++;
	}
}
