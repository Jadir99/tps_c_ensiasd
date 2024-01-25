#include <stdio.h>
#include <math.h>

int main(){

    int nbr_bits;
    printf(" donner un nombre en bits : ");
    scanf("%d",&nbr_bits);

    // en octet 

    printf("le nombre en octets est : %d",nbr_bits/8);

    // en kilo octets
    printf("le nombre en kilo octets est : %d",nbr_bits/8/pow(2,10));
    // en mega octets
    printf("le nombre en mega octets est : %d",nbr_bits/8/pow(2,20));
    // en giga octets 
    printf("le nombre en giga octets est : %d",nbr_bits/8/pow(2,30));
    return 0;
}