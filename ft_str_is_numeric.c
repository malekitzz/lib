#ifndef __FT_STR_NUMERIC__
#define __FT_STR_NUMERIC__
int iss_numeric(char c)
{
	if((c > 47) && (c < 58) || (c == 32)){
		return (1);
	}	
	else 
		return (0);
}
int ft_str_is_numeric(char *str)
{
	int i;
	i = 0;
	while(str[i]){
		if(!(iss_numeric(str[i]))){
			return (0);	
		}
		i++;
	}
	return (1);
}
#endif
