#ifndef __FT_STRNCMP__
#define __FT_STRNCMP__
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while((s1[i] || s2[i]) && (i < n)){
		if(s1[i] < s2[i]){
			return (-1);	
		}
		if(s1[i] > s2[i]){
			return (1);	
		}
	i++;
	}
	return (0);
}

#endif
