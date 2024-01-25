
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// definir un structure de locale 
typedef struct  { 

    int numero;
    int nbr_place;
    char type[50];
}locale;
// la lecture
void Lire(locale *l1) {
    printf("donner le numero de locale ");
    scanf("%d",&l1->numero);
    printf("donner le nombre de place");
    scanf("%d",&l1->nbr_place);
    printf("entre le type de locale (atrium, salle, amphi)");
    fflush(stdin);
    gets(l1->type);
}
//l'affichage
void Afficher(locale l1) {
    printf("le numero est %d\n",l1.numero);
    printf("le nombre de place est %d\n",l1.nbr_place);
    printf("le type est %s\n",l1.type);
}

// fonction qui verifie si le tableau est trier
int EstTrier(locale tab[],int dim) {
    int i;
    for (i=0;i<dim-1;i++) {
        if (tab[i].numero>tab[i+1].numero) {
            return -1;
        }
    }
    return 1;
}
// fonction qui cherche un local dans le tableau
int ChercherLocal(locale tab[],int dim,int nbr) {

    if (EstTrier(tab,dim)==1) {
        // on cherche dans le tableau avec la methode dichotomie
        int f=dim-1,d=0,m;
        while (m>1){
            m=(d+f)/2;
            if (tab[m].numero==nbr) {
                return 1;
            }
            else if (tab[m].numero<nbr) {
                d=m+1;
            }
            else {
                f=m-1;
            }
        }

    }else{
        // la methode 2 recherche sequentielle si le tableau n'est pas trier
        for (int i=0;i<dim;i++) {
            if (tab[i].numero==nbr) {
                return 1;
            }
        }
    }
    return 0;
}

//a ffichage par type passer en parametre

void FiltreParType(locale tab[],int dim,char *type) {

    int i;
    for (i=0;i<dim;i++) {
        if (strcmp(tab[i].type,type)==0) {
            Afficher(tab[i]);
        }
    }

}


 
int main(){
    int dim;
    locale est ;
    // Lire(&est);
    // Afficher(est);


    // lecture d'un liste de locaux
    printf("donner la dimention de table");
    scanf("%d",&dim);
    locale *tab = (locale *)malloc(dim * sizeof(locale));

    for (int i=0;i<dim;i++){
        printf("donner locale nombre %d\n",i+1);
        Lire(tab+i);
    }

    // affichage du tableau


    for (int i=0;i<dim;i++){
        Afficher(*(tab+i));
    }

    printf("le tableau est trier %d\n",EstTrier(tab,dim)); 

    printf("la valeur 1 est dans le tableau %d\n",ChercherLocal(tab,dim,1));

    printf("donner le type pour filtrer le tableau par type ");
    fflush(stdin);
    gets(est.type);

    FiltreParType(tab,dim,est.type);

    
free(tab);
    return 0;
}

