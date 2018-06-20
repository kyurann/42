#include <unistd.h>


int	ft_putchar(char c)
{
	write(1,&c,1);
}

int	ft_print_comb()
{
	int i;
	int j;
	int k;

	i = '0' - 1;

	while(++i <= '9')
	{
		j = i;
		while(++j <= '9')
		{
			k = j + 1;
			while(k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				
				if(i != '7' || j != '8' || k != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				k++;
			}
		}
	}
}

int	main()
{
	ft_print_comb();
	return 0;
}
