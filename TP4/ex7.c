#include <stdio.h>

float multiplier_2(float n){
    return n*2;
}

int main(){

    //Déclarer un pointeur qui point sur une fonction permettant de multiplier un nombre par deux.
    float (*mul2)(float)=&multiplier_2;
    int nbr;
    printf ("donner un nombre : ");
    scanf("%d",&nbr);
    printf("le resultat est : %.2f",mul2(nbr));

    return 0;
}