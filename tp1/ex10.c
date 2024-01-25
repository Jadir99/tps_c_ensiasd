#include <stdio.h>

int main(){


    // calcule factoriel

    int f, nbr,i;
    printf("donner un nombre pour le calcul du factoriel :");
    scanf("%d", &nbr);
    i=nbr;

    while(i>1){
        i--;
        f*=i;
    }

    printf("le factoriel de %d est %d",nbf);

    return 0;
}