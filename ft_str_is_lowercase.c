#ifndef __FT_STR_LOWERCASE__
#define __FT_STR_LOWERCASE__
int is_low(char c)
{
	if((c >= 'a') && (c <= 'z') || (c == ' ')){
		return (1);	
	}
	else
		return (0);
}
int ft_str_is_lowercase(char *str)
{
	
	int i;

	i = 0;
	while(str[i]){
		if(!(is_low(str[i]))){
			return (0);	
		}
	i++;	
	}

	return (1);	
}

#endif
