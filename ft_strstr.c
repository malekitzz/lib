#ifndef __FT_STRSTR__
#define __FT_STRSTR__

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;
	int	size;
		
	i = 0;
	z = 0;
	size = 0;
	while (to_find[size])
		size++;
			if(size == 0)
				return (str);
	while (str[i]){
		while (to_find[z] == str[i + z]){
			if (z == size - 1)
				return (str + i);
				z++;
		}
	z = 0;
	i++;
	}
	return (0);
}

#endif
