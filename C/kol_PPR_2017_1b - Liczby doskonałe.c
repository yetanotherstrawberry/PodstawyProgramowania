#include <stdio.h>

int suma_dzielnikow(int liczba){
    
    int suma = 0;
    
    for(int i = 1; i < liczba; i++) if(liczba % i == 0) suma += i;
    
    return suma;
    
}

int main()
{

    int ilosc = 0;
    int a, b;
    
    scanf("%i %i", &a, &b);
    
    for(int i = a; i <= b; i++) if(i == suma_dzielnikow(i)){ printf("%i ", i); ilosc++; }
    if(ilosc == 0) printf("BRAK");

    return 0;
    
}
