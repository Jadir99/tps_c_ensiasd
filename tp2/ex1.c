#include <stdio.h>

#include <stdlib.h>

int chercherVal(int tab[], int n, int A, int *pos, int *nb_occ) {

    for (int i = 0; i < n; i++) {
        (*nb_occ)++;
        if (tab[i] == A) {
            *pos = i;
            return 1;
        }
        printf("%d %d\n", tab[i],A,*pos);
    }
    return 0;
}

int main(){

    int tab [5];
    int *p,pos,nb_occ,A=0;

    for(p=tab;p-tab<5;p++){

        printf("\n donnenr un valeur : ");
        scanf("%d",p);
        // printf("%d",*p);
    }
    //affichage
    for(p=tab;p-tab<5;p++)printf("%d",*p);

    // la valeur de a 
    printf("donner la valeur que vous avez besoin");
    scanf("%d",&A);


    // /tester si la valeurs de A existe 
    if(chercherVal(tab,5,A,&pos,&nb_occ)==1){
        printf("la valeur %d est existe\n",A);
        printf("l'indice de valeur %d est %d\n",A,pos);
        printf("le nombre d 'occurence est :%d",nb_occ);
    }
    else printf("la valeur est pas existes ");

    return 0;
}
