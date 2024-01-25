#include <stdio.h>
#include <stdlib.h>

int main(){


    // utiliser la fonction randome pour faire un noombre magique 
    int nbr,magique = rand()%100;

    do{
        printf("donner un nombre :");
        scanf("%d",&nbr);
        if(nbr < magique)
        printf("il est au dessus du nombre magique");
        else if(nbr > magique)
        printf("il est en dessous du nombre magique");
        else if(nbr > magique)
        printf("bravo !!! vous etes gagner");
    } while(nbr!= magique);
    return 0;
}