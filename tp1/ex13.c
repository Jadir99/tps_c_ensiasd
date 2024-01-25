#include <stdio.h>

int absolue(int nbr){
    return nbr>0? nbr : -nbr;
}

int main(){

    int nbr ;

    printf("donner un nombre :");
    scanf("%d",&nbr);
    printf("le nombre absolue est %d",absolue(nbr));


    return 0;
}