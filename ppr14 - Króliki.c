#include <stdio.h>

int main()
{
    
    int i = 0, ile, max = 0;
    scanf("%i", &ile);
    
    int n[ile];
    for(; i < ile; i++){
        
        scanf("%i", &n[i]);
        if(n[i] > max) max = n[i];
        
    }
    
    long long int wyniki[max + 1];
    wyniki[0] = 1;
    wyniki[1] = 1;
    wyniki[2] = 1;
    for(i = 3; i <= max; i++) wyniki[i] = wyniki[i - 1] + (wyniki[i - 3] * 2);
    
    for(i = 0; i < ile; i++) printf("%lld\n", wyniki[ n[i] ]);

    return 0;
    
}
