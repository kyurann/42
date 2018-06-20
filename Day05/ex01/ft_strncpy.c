char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int scan;
	int	size;

	size = 0;
	scan = 0;

	while(i < n && src[scan])
	{
		dest[scan] = src[scan];
		scan++;
	}
	while(scan < n)
	{
		dest[scan]	= '\0';
		scan++;
	}

	return (dest);
}
