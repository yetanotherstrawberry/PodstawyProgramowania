#include <stdio.h>

long long int f(int n, int m){
    
    long long int wyniki[n + 1][m + 1];
    
    for(int i = 0; i <= n; i++) wyniki[i][0] = i;
    for(int j = 0; j <= m; j++) wyniki[0][j] = j;
    
    for(int x = 1; x <= n; x++) for(int y = 1; y <= m; y++) wyniki[x][y] = wyniki[x - 1][y] + wyniki[x][y - 1] + wyniki[x - 1][y - 1];
    
    return wyniki[n][m];
    
}

int main()
{
    
    int n, m, testy;
    scanf("%i", &testy);
    
    for(int i = 0; i < testy; i++){
        
        scanf("%i %i", &n, &m);
        
        printf("f(%i,%i)=%lli\n", n, m, f(n, m));
        
    }

    return 0;
    
}
