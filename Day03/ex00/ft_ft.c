#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
	ft_putchar(*nbr);
}


int	main()
{
	ft_ft();
	return 0;
}
