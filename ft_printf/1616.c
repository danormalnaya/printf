#include <unistd.h>
int	to_16(unsigned int numb, int type)
{
	char *base;
	int i = 1;
	base = "0123456789abcdef0123456789ABCDEF";
	if (numb < 16)
	{
		write(1, &base[numb + 16*type], 1);
		
	}
	else
	{
		i += to_16(numb / 16, type);
		to_16(numb % 16, type);
	}
	return i;
}

#include <stdio.h>

int main(void)
{
	printf("\tsize = %d\n", to_16(113465789,1));
	printf("\tsize = %d\n", to_16(113465789,0));
}