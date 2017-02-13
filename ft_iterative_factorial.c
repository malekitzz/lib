#ifndef __FT_ITERATIVE_FACTORIAL__
#define __FT_ITERATIVE_FACTORIAL__
int ft_iterative_factorial(int nb)
{
	int nbfact;
	int result;
	int i;
	result = 1;
	i = 0;
	while(i < nb){
		result = result * (i + 1); 
	i++;
	}
	
	return(result);
}

#endif
