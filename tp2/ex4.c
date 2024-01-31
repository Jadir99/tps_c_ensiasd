#include <stdio.h>

#include <stdlib.h>


void ranger(int *a,int *b){

    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;

}

int main(){

    int tab [5];
    int *p1,*p2;
    

    for(p1=tab;p1-tab<5;p1++){

        printf("\n donnenr un valeur : ");
        scanf("%d",p1);
        // printf("%d",*p);
    }
    
    //affichage
    for(p1=tab;p1-tab<5;p1++)printf("%d",*p1);
    p1=tab;
    p2=tab+4;

    for (; p1 < p2; p1++, p2--) {
        ranger(p1,p2);
    }

    // affichage d'uverse
    
    for(p1=tab;p1-tab<5;p1++)printf("%d",*p1);



   

    return 0;
}