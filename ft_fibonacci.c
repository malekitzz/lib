#ifndef __FT_FIBONNACCI__
#define __FT_FIBONNACCI__

int ft_fibonacci(int index)
{
	if(index == 0){
		return (0);	
	}	
	if(index == 1){
		return (1);	
	}
	return(index + (ft_fibonacci(index - 1)));
}

#endif
