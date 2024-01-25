#include <stdio.h>

#define PI 3.14;

int main(){

    // float s,r;
    // printf(" donner le rayon :");
    // scanf("%f",&r);
    // s=r*r*PI;
    // printf("la surface est : %f",s);




    // nombre parfait 

    // int nombre,parfait=0 ;

    // printf("donner un nombre :");
    // scanf("%d",&nombre);

    // for (int i=1; i<=nombre/2; i++){
    //     if(nombre % i==0)
    //     parfait+=i;
    // }

    // if (parfait==nombre)
    // printf("le nombre est parfait\n");
    // else
    // printf("le nombre est pas parfait");

    int tab[3][3];

    printf ("------------------------REMPLIRE la matrice------------------------\n");
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("donner la valeur de tab[%d][%d] ",i+1,j+1);
            scanf("%d",&tab[i][j]);
        }
    }

    printf("----------------------------affichage de matrice :-------------------------------------------- \n");
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("tab[%d][%d] = %d\n",i+1,j+1,tab[i][j]); 
        }
        printf("\n");
    }

    printf("******************************matrice diagonale ***************************************\n");

    for (int i = 0; i < 3; i++){
        tab[i][i]=0;
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("tab[%d][%d] = %d\n",i+1,j+1,tab[i][j]); 
        }
        printf("\n");
    }

    printf("******************************matrice des lignes d'indice paire ***************************************\n");

    for (int i = 0; i < 3; i+=2){
        for (int j = 0; j<3; j++)
        printf("tab[%d][%d] = %d\n",i,j,tab[i][j]);
    }



    return 0;
}