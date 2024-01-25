#include <stdio.h>

int main(){

    int nbr,s=0;
// programme qui fait la somme de 3 nombres
    printf("donner un nombre 1:");
    scanf("%d",&nbr);
    s+=nbr;
    printf("donner un nombre 2:");
    scanf("%d",&nbr);
    s+=nbr;
    printf("donner un nombre 3:");
    scanf("%d",&nbr);
    s+=nbr;
    printf("la somme est %d",s);
    return 0;
}