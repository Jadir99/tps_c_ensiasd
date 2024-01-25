#include <stdio.h>

void equ2D(){
    int delta,x1,x2,a,b,c;

    printf ("donner les 3 coefficients de l'equation : a b c : ");
    scanf ("%d %d %d",&a,&b,&c);
    delta=b*b-4*a*c;
    if (delta==0){
        // un solution 
        x1=(-b)/(2*a);
        printf("l'equation admet un solution que est : %d \n",x1);
    }else if (delta>0){
        // deux solutions
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("x1=%d et x2=%d \n",x1,x2);
    }else printf("l'equation n'admet pas de solution dasn R \n");

}
int main(){

    equ2D();

    return 0;
}