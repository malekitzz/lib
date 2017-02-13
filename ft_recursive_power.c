#ifndef __FT_PUTNBR__
#define __FT_PUTNBR__

void ft_putnbr(int nb);

int ft_recursive_power(int nb, int power)
{
	if(power < 0){
		return (0);	
	}
	if(power == 0){
		return (1);
	}	
	return(nb *(ft_recursive_power(nb, power - 1)));
}
int main ()
{
	
	ft_putnbr(ft_recursive_power(2, 5));
	
	return (0);	
}

#endif
