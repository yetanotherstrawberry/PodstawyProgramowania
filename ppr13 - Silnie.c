
#include <stdio.h>

int silnia(int n, int k){
    
    if(0 == n || n < k) return 1;
    else return n * silnia(n-k, k);
    
}

int main()
{
    
    int ile, i = 0;
    scanf("%i", &ile);
    
    int n[ile], k[ile];
    for(; i < ile; i++) scanf("%i %i", &n[i], &k[i]);
    
    for(i = 0; i < ile; i++) printf("%i\n", silnia(n[i], k[i]));

    return 0;

}
