#include <stdio.h> //printf, scanf
#include <string.h> //strlen
#define MAX 30
int main() {
    char palabra[MAX];
    int longitud;
    int bandera = 1;
    printf("Ingrese una palabra? ");
    scanf("%s", palabra);
    longitud = strlen(palabra);
    for(int i=0, j=longitud-1; i<=longitud/2; i++,j--) {
        if(palabra[i] != palabra[j]) {
            bandera = 0;
            break;
        }
    }
    printf("Resultado: %s", bandera == 1? "Es Palidromo":"No Es Palidromo");
    /*
    a r r a  = 4           4/2 = 2
    r e c o c e r = 7      7/2 = 3
    */
    return 0;
}