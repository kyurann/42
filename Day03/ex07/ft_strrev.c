#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putstr(char *str){
	int index = 0;

	while(str[index] != '\0'){
		index++;
		ft_putchar(str[index]);
	}
}

char	*ft_strrev(char *chain)
{
	int i;
	int l;
	char t;
	
	l = 0;
	while(chain[l] != '\0')
	{
		l++;
	}

	while(++i< --l)
	{
		t = chain[i];
		chain[i] = chain[l];
		chain[l] = t;
	}
	
	ft_putstr(chain);
}

int main()
{
	ft_strrev("1234");
	return 0;
}
