#include <stdio.h>

int main(){


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

    printf("----------------------------la conversion de matrice en un table a un selue dimension  :-------------------------------------------- \n");

    int t[9],indice=0;

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            t[indice]=tab[i][j];
            indice++;
        }
        
    }

        printf("----------------------------affichage de tableau :-------------------------------------------- \n");

    for(int i = 0; i <9;i++)
    printf("t[%d] %d ",i+1,t[i]);



    return 0;
}