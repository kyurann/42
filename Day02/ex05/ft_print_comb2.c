#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print_comb2()
{
	int i;
	int j;

	i = '0' - 1;
	while(++i <= '9')
	{
		j = i;
		while(++j <= '9')
		{
			ft_putchar(i);
			ft_putchar(j);
			
			if(i != '9' || j != '9')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

int	main()
{
	ft_print_comb2();
	return 0;
}
