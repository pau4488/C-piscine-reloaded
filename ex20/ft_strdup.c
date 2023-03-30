int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*cpy;

	cpy = malloc(ft_strlen(str) * sizeof(char));
	if(!cpy)
		return(0);
	cpy = str;
	return(cpy);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str)
	{
		i++;
		str++;
	}
	return (i);
}
