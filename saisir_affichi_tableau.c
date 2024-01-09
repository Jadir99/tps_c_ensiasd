#include <stdio.h>


int main(){
    // int t[10];

    // for (int i=0; i<10;i++){
    //     printf("donner un nombre : %d ",i);
    //     scanf("%d", &t[i]);
    // }

    // for (int i=0; i<10;i++)
    // printf("tab[%d] = %d\n",i,t[i]);

    // calcule la trace d'un matrice 
    int tab[3][3];

    printf ("------------------------donner les valeurs de la matrice------------------------\n");
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("donner la valeur de tab[%d][%d] ",i+1,j+1);
            scanf("%d",&tab[i][j]);
        }
    }

    printf("----------------------------voila la matrice :-------------------------------------------- \n");
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("tab[%d][%d] = %d\n",i+1,j+1,tab[i][j]); 
        }
    }

    printf("----------------------------voila la trace de la matrice :-------------------------------------------- \n");
    int trace =0;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (i==j){
                trace+=tab[i][j];
            }
        }
    }

    printf("la trace est : %d",trace);
    

    return 0;
}