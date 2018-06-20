#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int temp;
	int size;

	size = 1;
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}

	temp = nb;
	while((temp /= 10) > 0)
	{
		size *= 10;
	}
	temp = nb;
	
	while(size)
	{
		ft_putchar((char)((temp / size)) + 48);
		temp %= size;
		size /= 10;
	}
}

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	
	while(str[count] != '\0')
	{
		count++;
	}
	ft_putnbr(count);
}

int	main()
{
	ft_strlen("compte moi ça");
	return 0;

}
