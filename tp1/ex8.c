#include <stdio.h>

int main(){

    // multiplication san operateur de mul

    int a, b;
    printf("donner a et b : ");
    scanf("%d %d", &a, &b);

    for(int i=0; i<b;i++)
        a+=b;
    printf(" le roduit est :%d",a);

    return 0;
}