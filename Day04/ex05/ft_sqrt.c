int	ft_sqrt(int nb)
{
	int qrt;
	qrt = 1;

	while(qrt * qrt != nb)
	{
		if(qrt / 2 > nb)
			break;
		
		qrt++;
	}
	
	if(qrt * qrt == nb)
		return(qrt);
	
	return 0;
}
