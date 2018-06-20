#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_iterative_factorial(int nb)
{
	int facto;
	
	if(nb < 0 || nb > 12)
	{
		return 0;
	}
	
	facto = nb;

	while(facto > 2)
	{
		nb = nb * (facto - 1);
		facto--;
	}

	return(nb);
}
int main()
{
	ft_iterative_factorial(5);
	return 0;
}
