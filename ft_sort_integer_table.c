#ifndef __FT_SORT_INTEGER_TABLE__
#define __FT_SORT_INTEGER_TABLE__
#include <stdlib.h>
#include <stdio.h>

void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int nbr = 0;
	
	i = 0;
	while(i < size){
		if(tab[i] > tab[i + 1]){
			nbr = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = nbr;
			i = 0;
		}
		else
			i++;
	}
}
#endif
