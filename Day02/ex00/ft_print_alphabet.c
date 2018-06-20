#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_alphabet()
{
	int a;
	a = 'a';

	while(a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}

int	main()
{
	ft_print_alphabet();
	return 0;
}
