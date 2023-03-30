void	ft_sort_params(&argc, &argv);
void	ft_print_args(&argc, &argv);

int	main(int argc, char **argv)
{
	ft_sort_params(&argc, &argv);
	ft_print_args(&argc, &argv);
	return(0);
}

void    ft_sort_params(&argc, &argv)
{
	int	i;
	char	*temp;

	i = 1;
	temp = malloc(255 * siseof(char));
	while(i < *argc)
	{
		if(*argv[i] > *argv[i + 1])
		{
			temp = *artv[i];
			*argv[i] = *argv[i + 1];
			*argv[i + 1] = temp;
		}
		i++;
	}
}

void	ft_ptint_args(&argc, &argv)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while(i < *argc)
	{
		len = ft_strlen(*argv[i]);
		write(1, &argv[i++], len);
		write(1, '\n', 1);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str)
	{
		str++;
		i++;
	}
	return(i);
}
