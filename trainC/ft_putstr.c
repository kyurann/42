#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putstr(char *str)
{
	int	index;
	index = 0;

	while(str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_putstr(argv[1]);
	}
	else
	{
		ft_putstr("too few arguments");
	}

	return 0;
}
