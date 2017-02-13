#ifndef __FT_STR_IS_ALPHA__
#define __FT_STR_IS_ALPHA__
int iss_alpha(char c)
{
		if((c >= 65) && (c <= 90)){
			return (1);
		}
		if((c >= 97) && (c <= 122)){
			return (1);	
		}
		if(c == 32){
			return (1);	
		}
		else
			return (0);	
}

int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while(str[i]){
		if(!(iss_alpha(str[i]))){
			return (0);	
		}
	i++;
	}
	return (1);
}

#endif
