#include "max.c"
#include <stdio.h>
int main(){

    int a,b;
    printf("donner deux nombres : ");
    scanf("%d %d",&a,&b);
    printf(" la plus grande valeur est %d",max(a,b));
    return 0;
}