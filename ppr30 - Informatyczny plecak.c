#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    
    union {
        
        int a;
        long long b;
        float c;
        double d;
        
    } plecak;
    
    double liczba;
    int  i = 0, ile;
    char* temp = calloc(6, sizeof(char));
    
    scanf("%f", &plecak.c);
    scanf("%i", &ile);
    
    for(; i < ile; i++) {
        
        scanf("%s", temp);
        if(strcmp(temp, "int") == 0) printf("%i", plecak.a);
        else if(strcmp(temp, "long") == 0) printf("%lli", plecak.b);
        else if(strcmp(temp, "float") == 0) printf("%f", plecak.c);
        else printf("%lf", plecak.d);
        
    }
    

    return 0;

}
