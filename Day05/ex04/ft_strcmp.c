int	ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	
	while(s1[index] || s2[index])
	{
		if(s1[index] == s2[index])
			return (1);

		if(s1[index] != s2[index])
			return (-1);

		index++;
	}
	return 0;
}
