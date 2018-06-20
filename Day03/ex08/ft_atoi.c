#include <unistd.h>

int	ft_atoi(char *str)
{
	int result;
	int sign;

	sign = 1;
	if(*str == '-')
	{
		sign = -1;
		str++;
	}
	result = 0;
	while(*str >= '0' && *str <= '9' && *str != '\0')
	{
		result *= 10;
		result = result + *str - '0';
		str++;
	}
	return (result * sign);
}
