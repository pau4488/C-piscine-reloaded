int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	arr = 0;
	if(min >= max)
		return(NULL);
	while(min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return(arr);
}
