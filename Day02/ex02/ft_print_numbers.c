#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_numbers()
{
	int u;
	u = '0';

	while (u <= '9')
	{
		ft_putchar(u);
		u++;
	}
}


int	main()
{
	ft_print_numbers();
	return 0;
}
