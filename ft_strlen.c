#ifndef __FT_STRLEN__
#define __FT_STRLEN__
#include <unistd.h>
#include <stdio.h>
void ft_putnbr(int nb);

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0'){
	i++;	
	}	
	ft_putnbr(i);
}
#endif
