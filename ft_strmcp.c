#ifndef __FT_STRMCP__
#define __FT_STRMCP__

int ft_strmcp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] || s2[i]){
		if(s1[i] < s2[i]){
			return(-1);	
		}	
		if(s1[i] > s2[i]){
			return(1);	
		}
	i++;
	}	
	return (0);
}

#endif
