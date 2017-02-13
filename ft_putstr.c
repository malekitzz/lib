#ifndef __FT_PUTSTR__
#define __FT_PUTSTR__
void ft_putchar(char c);

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0'){
		
		ft_putchar(str[i]);
	i++;
	}
	
}

#endif

