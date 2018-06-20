#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_reverse_alphabet()
{
	int z;
	z = 'z';

	while(z >= 'a')
	{
		ft_putchar(z);
		z--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
	return 0;
}
