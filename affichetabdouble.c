#ifndef __AFFICHE_TAB_DOUBLE__
#define __AFFICHE_TAB_DOUBLE__

void affichetabdouble(char **tab, int taille)
{
	int j;
	int i;
	i = 0;
	while(i < taille){
		j = 0;
		while(j < taille){
			ft_putchar(tab[i][j]);
			j++;
		}
	ft_putchar('\n');
	i++;
	}
}

#endif
