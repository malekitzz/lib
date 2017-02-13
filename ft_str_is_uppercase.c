#ifndef __FT_STR_UPPERCASE__
#define __FT_STR_UPPERCASE__
int is_upper(char c)
{
	if((c >= 'A') && (c <= 'Z') || (c == ' ')){
		return(1);	
	}	
	else 
		return (0);	
}
int ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while(str[i]){
		if(!(is_upper(str[i]))){
			return (0);	
		}
	i++;
	}

	return (1);	
}

#endif
