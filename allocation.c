#include <stdio.h>
#include <stdlib.h>

int main(){

    int *a=(int *)malloc(sizeof(int));
    int *b=(int *)malloc(sizeof(int));
    printf("donner les valurs de a et b : ");
    scanf("%d %d",a,b);
    printf("la somme est : %d\n",*a+*b);
    free(a);
    free(b);

    //programme 2
    int i=0;
    int *n=(int *)malloc(sizeof(int));
    printf("donner la taille de tab:");
    scanf("%d",n);
    
    int tab[*n];
    for(int i=0; i<*n; i++){
        printf("donner la valeur de tab[%d] : ",i+1);
        scanf("%d",&tab[i]);
    }
    int s=0,s2;
    for (int i = 0; i < *n; i++)
    {
        printf("tab[%d]= %d ",i+1,tab[i]);
        if(tab[i]%2!=0)s+=tab[i];
        if(i%2!=0)s2+=i;
    }
    printf("\nla sommes des elements de tableau est :%d",s);
    printf("\nla sommes avec les indices est :%d",s2);
    // system("dir");
    
    free (n);



    // ouvrir un fichier jadir_mohammed
    FILE f = fopen("jadir_mohammed", "r")
    
    return 0;
}