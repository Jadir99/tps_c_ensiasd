#include <stdio.h>

int main(){

    int t1[3][1],t2[1][3],p=0;
    printf("\n======================================matrice 1=======================================\n");
    for (int i=0;i<3;i++){
        printf("donner la valeur de vecture %d+1",i+1);
        scanf("%d",&t1[i][0]);
    }
    printf("\n======================================matrice 2=======================================\n");
    // remplire la matrice 1
    for (int i=0;i<3;i++){
        printf("donner la valeur de vecture %d+1",i+1);
        scanf("%d",&t2[0][i]);
    }


    for (int i=0;i<=2;i++){
        p=p+t1[i][0]*t2[0][i];
    }

    printf("le produit est :%d",p);


    return 0;
}