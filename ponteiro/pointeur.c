#include <stdio.h>

int main(){

    float a = 5;
    float *p ;
    p = &a ;

 // On affiche la valeur de a et son adresse :
    printf("La variable a = %f \n", a);
    printf("L’adresse de a = %p \n" , &a);

 // La valeur de p et son adresse
    printf("La valeur de p = %p \n", p);
    printf("L’adresse de p = %p \n", &p);
    printf("La valeur de *p = %f \n", *p);
    return 0;
}