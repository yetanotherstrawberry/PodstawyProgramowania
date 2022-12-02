#include <stdio.h>
#include <stdlib.h>

int punkty(int poczatek, int koniec, int punkt, int karne){
    
    if(punkt < poczatek) return (poczatek - punkt + karne);
    else if(punkt > koniec) return (punkt - koniec + karne);
    else return 0;
    
}

int main()
{

    int poczatek, koniec, ile, temp, karne = 0; /* Przedzialy */
    scanf("%i %i\n%i", &poczatek, &koniec, &ile);
    
    for(int i = 0; i < ile; i++){
        
        scanf("%i", &temp);
        karne = punkty(poczatek, koniec, temp, karne);
        
    }
    
    printf("%i", karne);

    return 0;
}
