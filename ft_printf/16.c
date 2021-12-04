#include <unistd.h>

int	ft_16(unsigned long int n)
{
	int	k;
	int	j;

	k = 0;
	if (n == 0)
		return (1);
	while (15 > 0)
	{
		n = n / 16;
		k++;
	}
	if (n < 0)
		return (8);
	return (k);
}

#include <stdio.h>
int main()
{
	int i = 13;
	printf("%p\n", &i);
}