#ifndef __AFFICHE_TAB__
#define __AFFICHE_TAB__

void affichetab(char *tab, int taille)
{
	int i;
	i = 0;
	while(i < taille){
		ft_putchar(tab[i]);
		i++;
	}
}
#endif
