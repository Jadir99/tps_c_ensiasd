#include <stdio.h>

#define PI 3.14
#define CARRE(x) ((x) * (x))
#define somme(x,y) ((x) + (y))
#define surface_cercle(r) (PI * CARRE(r))


int main(){


    int n;
    printf("donner le nombre des cercles que vous voulez : ");
    scanf("%d", &n);
    int cercle[n];
    for(int i = 0; i < n; i++){
        printf("donner la valeur de r  pour %d\n ",i+1);
        scanf("%d",cercle+i);
    }
    for (int i=0;i<n;i++){
        printf(" la surface de cercle %d est %f\n ",i+1,surface_cercle(cercle[i]));
    }
    double somme_cercle = 0;
    for(int i=0;i<n;i++){
        somme_cercle += surface_cercle(cercle[i]);
    }
    printf("la somme des surfaces des cercles est %f ",somme_cercle);
    
    return 0;
}