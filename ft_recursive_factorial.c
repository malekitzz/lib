#ifndef __FT_RECUSRIVE_FACTORIAL__
#define __FT_RECURSIVE_FACTORIAL__
int ft_recursive_factorial(int nb)
{
	if(nb < 0){
		return (0);	
	}
	if((nb == 0) || (nb == 1)){
		return (1);	
	}
	else
		return(nb * ft_recursive_factorial(nb - 1));
}

#endif
