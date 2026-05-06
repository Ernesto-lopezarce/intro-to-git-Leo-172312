#include <stdio.h>

int main() {
    int edad;
    printf("Indique su edad: ");
    scanf("%d", &edad);

    if(edad >= 18){
        printf("Eres mayor de edad\n");
    }
    else{
        printf("Te falta vivir bb\n");
    }

    return 0;
}