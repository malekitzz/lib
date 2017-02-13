#ifndef __FT_STR_LOWCASE__
#define __FT_STR_LOWCASE__

char *ft_str_lowcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0'){
		if((str[i] > 64) && (str[i] < 91)){
			str[i] += 32;
		i++;
		}
		else 
			i++;
	}

	return(str);	
}

#endif

