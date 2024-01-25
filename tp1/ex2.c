#include <stdio.h>


int main(){

    int x,y;

    printf("donner les valeurs de x est y :");
    scanf("%d%d",&x,&y);
    printf("la somme est : %d \n",x+y);

    // calculatrice 

    int a,b,c,op;
    printf("donner les valeurs de a est b :");
    scanf("%d%d",&a,&b);

    printf("+: pour la somme +\n");
    printf("*: pour la multiplication +\n");
    printf("/: pour la division +\n");
    printf("-: pour la soustraction +\n");
    scanf("%d",&op);

    switch(op){
        case '+':
            printf("la somme est %d",a+b);
            break;
        case '-':
            printf("la difference est %d",a-b);
            break;
        case '*':
            printf("la multiplication est %d",a*b);
            break;
        case '/':
            if (b!=0)
                printf("la division est %d",a/b);
                break;
        default:
            printf("operation inconnue");
            break;
    }
}