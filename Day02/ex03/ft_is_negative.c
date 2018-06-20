#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_negative(int n)
{
	if (n >= '0')
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}

int	main()
{
	ft_is_negative();
	return 0;
}
