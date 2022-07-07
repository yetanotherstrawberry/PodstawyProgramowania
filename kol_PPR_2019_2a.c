#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int czyPierwsza(int liczba){
    
    for(int i = 2; i < liczba; i++) if(liczba % i == 0) return 0;
    
    return 1;

}

int sumaCyfr(char *str){
    
    int suma = 0;
    
    for(int i = 0; i < strlen(str); i++) suma += (int)(str[i] - '0');
    
    return suma;
    
}

int main()
{
    
	int ile_testow;
	scanf("%i", &ile_testow);

	char *temp = malloc(sizeof(char) * 10000);
	
    for(int i = 0; i < ile_testow; i++){ 
        
        scanf("%s", temp);
        
        if(czyPierwsza(atoi(temp)) == 1 && czyPierwsza(sumaCyfr(temp))) printf("TAK\n");
        else printf("NIE\n");
        
    }

    return 0;
    
}
