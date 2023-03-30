int	ft_sqrt(int nb)
{
	
}

int sqrt_int(int n) {
    int x = n;
    int y = 1;
    while (x > y) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}
