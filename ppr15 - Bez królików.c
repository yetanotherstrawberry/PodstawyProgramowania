#include <stdio.h>

int A(int n){
    
    // A(0) = 4
    // A(1) = 7
    // A(n) = (2*f(n-1) + 5*f(n-2)) % 2011
        
    int liczba = 0, i = 2, przedostatni = 4, ostatni = 7;
    
    if(n == 0) liczba = 4;
    else if(n == 1) liczba = 7;
    
    for(; i <= n; i++){
        
        liczba = 2*ostatni + 5*przedostatni;
        
        przedostatni = ostatni;
        
        liczba %= 2011;
        ostatni = liczba;

    }

    return liczba;
    
}

int main()
{
    
    int i = 0, ile;
    scanf("%i", &ile);
    int n[ile];
    for(; i < ile; i++) scanf("%i", &n[i]);
    
    for(i = 0; i < ile; i++) printf("%i\n", A(n[i]));

    return 0;
    
}
