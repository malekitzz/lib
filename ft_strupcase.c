#ifndef __FT_STRUPCASE__
#define __FT_STRUPCASE__

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0'){
		if((str[i] > 96) && (str[i] < 123)){
			str[i] = str[i] - 32;	
			i++;	
		}
		else 
			i++;
	}

	return (str);
}

#endif
