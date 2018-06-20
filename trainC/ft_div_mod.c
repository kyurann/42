#include <unistd.h>


int	ft_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}
