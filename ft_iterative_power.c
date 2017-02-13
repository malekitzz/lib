#ifndef __FT_ITERATIVE_POWER__
#define __FT_ITERATIVE_POWER__
int ft_iterative_power(int nb, int power)
{
	int result;
	int i;
	result = 1;
	i = 0;
	while(i <= power){
		result = result * nb;
	i++;
	}

	return (result);
}

#endif
