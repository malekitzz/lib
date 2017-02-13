#ifndef __FT_STRCPY__
#define __FT_STRCPY__

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while(src[i]){
		dest[i] = src[i];
	i++;
	}
	dest[i] = src[i];

	return(dest);
}

#endif
