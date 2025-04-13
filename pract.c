#include <stdio.h>
#define MAX 300

int main() {
    char letra;
    char texto[MAX];
    int i = 0;
    
    printf("Ingresar un texto? ");
    while(1) {
        letra = getchar();
        
        if(letra == '\n') break;
        
        texto[i] = letra; 
        i++;    
    }
    texto[i] = '\0';
    
    printf("Texto ingresado: %s", texto);
    
    return 0;
}
