#include <stdio.h>



int main(){

// exercice 1 de calculer le carre d'un nombre
    int a;
    printf("donner un nombre n entier");
    scanf("%d",&a);
    printf("le care de ce nombre est %d \n",a*a);

    // exercice 2 de calculer afficher la surface d'un cercle 

    int r;
    printf ("donner la valeur de r");
    scanf("%d",&r);
    printf("la surface du cercle est %f \n",3.14*r*r);


// exercice 3 de calculer la volume 

    int r1,h;
        printf("donner la valeur de r1 l et h ");
        scanf("%d%d",&r1,&h);
        printf("la volume est %f \n",3.14*r1*r1*h);




    return 0;
}