int	*ft_strstr(char *str, char *to_find)
{
	int index;
	int temp;
	int size;

	index = 0;
	temp = 0;
	size = 0;

	while(to_find[size])
	{
		finder++;
	}

	if(size == 0)
		return (str);

	while(str[index])
	{
		while(to_find[temp] == str[index + temp])
		{
			if(temp == size - 1)
				return(str + index);
			temp++;
		}
		temp = 0;
		i++;
	}
	return 0;
}
