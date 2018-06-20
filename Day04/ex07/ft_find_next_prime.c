int	ft_find_next_prime(int nb)
{
	int i;

	while(1)
	{
		i = 2;
		while(nb % i != 0)
		{
			i++;
		}

		if(i == nb)
		{
			return (nb);
		}

		else
			nb++;
	}
	return 0;
}
