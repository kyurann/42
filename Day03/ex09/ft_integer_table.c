void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while(i < size)
	{
		if(tab[i] > tab[i + 1])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
	
		else
			i++;
	}	
}
