#include <stdio.h> //printf, scanf
#include <string.h> //strlen
#define MAX 30
int main() {
    char palabra[MAX];
    char alreves[MAX];
    
    int longitud;
    int bandera = 1;
    printf("Ingrese una palabra? ");
    scanf("%s", palabra);
    
    longitud = strlen(palabra);
    int i,j;
    for(i=longitud-1,j=0; i>=0; i--,j++) {
        alreves[j] = palabra[i];
    }
    alreves[j] = '\0';
    if(strcmp(palabra,alreves) == 0) {
       printf("Es Palidromo");
    }else {
       printf("No Es Palidromo");
    }

    /*
    a r r a  = 4           4/2 = 2
    r e c o c e r = 7      7/2 = 3
    */
    return 0;
}