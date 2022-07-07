#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mroczneBabelki(char *tab){
	
	char temp;
	int i, j, ile = strlen(tab);

	for(i = 0; i < ile; i++, j = 0)
		for(; j < ile - 1; j++)
			if((int)*(tab + j) < (int)*(tab + j + 1)){
				
				temp = *(tab + j + 1);
				*(tab + j + 1) = *(tab + j);
				*(tab + j) = temp;
				
			}

	return tab;
}

int main()
{
    
    int ile, i = 0;
    scanf("%i", &ile);
    char **tab = malloc(sizeof(char*) * ile);
    for(; i < ile; i++) *(tab + i) = calloc(30, sizeof(char));
    
    for(i = 0; i < ile; i++) scanf("%s", *(tab + i));

    for(i = 0; i < ile; i++) printf("%s\n", mroczneBabelki(*(tab + i)));

    return 0;
    
}
