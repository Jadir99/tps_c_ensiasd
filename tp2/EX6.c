#include <stdio.h>
#include <string.h>
// definie la structure d'un date 
typedef struct {
    int jour;
    int mois;
    int annee;
}Date;

typedef struct {
    char rue[20];
    char ville[20];
    char codePostal[20];
}Adresse;

typedef struct {
    char nom[20];
    int CNE;
    Date date;
    Adresse adresse;
}Etudiant;

// remplir un etudiant

void remplirEtudiant(Etudiant *etudiant){
    printf("donner le nom : ");
    fflush(stdout);
    fgets(etudiant->nom, sizeof(etudiant->nom), stdin);
    getchar();
    printf("\n donner le CNE : ");
    scanf("%d",&etudiant->CNE);
    printf("donner la date : souf orme jj-mm-aa ");
    scanf("%d %d %d",&(etudiant->date.jour),&(etudiant->date.mois),&(etudiant->date.annee));
    printf("donner l'adresse : rue-ville-code postal ");
    fgets(etudiant->adresse.rue, sizeof(etudiant->adresse.rue), stdin);
    fgets(etudiant->adresse.ville, sizeof(etudiant->adresse.ville), stdin);
    fgets(etudiant->adresse.codePostal, sizeof(etudiant->adresse.codePostal), stdin);
}

// afficher un etudiant
void afficher(Etudiant etudiant){
    printf("nom : %s\n",etudiant.nom);
    printf("CNE : %d\n",etudiant.CNE);
    printf("date : %d/%d/%d\n",etudiant.date.jour,etudiant.date.mois,etudiant.date.annee);
    printf("adresse : %s\n",etudiant.adresse.rue);
    printf("ville : %s\n",etudiant.adresse.ville);
    printf("code postal : %s\n",etudiant.adresse.codePostal);
}

// ComparerDates
int ComparerDates(Date d1,Date d2){
    return d1.jour==d2.jour && d1.mois==d2.mois && d1.annee==d2.annee;
}

// remplir tableau des etudians
void remplirTableauEtudiants(Etudiant *etudiants,int n){
    for (int i = 0; i < n; i++) {
        printf("donner les informations de l'etudiant %d :\n",i+1);
        remplirEtudiant(&(etudiants[i]));
    }
}


//Afficher à partir de T les élèves nés avant une année de naissance donnée.

void affichertab_etudiant(Etudiant etudiant[],int n,Date d){
    for (int i = 0; i < 10; i++) {
        if (ComparerDates(etudiant[i].date,d)) {
            afficher(etudiant[i]);
        }
    }
}

//Afficher à partir de T les élèves qui ont ‘Ahmed’ comme prénom.
void affichertab_etudiant_parNom(Etudiant etudiant[],int n){
    for (int i = 0; i < n; i++) {
        if (strcmp(etudiant[i].nom,"Ahmed")==0) {
            afficher(etudiant[i]);
        }
    }
}

// Afficher les villes des élèves nés en 2010.
void afficher_par_annee(Etudiant etudiant[],int n,int annee){
    for (int i = 0; i < n; i++) {
        if (etudiant[i].date.annee==annee) {
            afficher(etudiant[i]);
        }
    }
}


int main(){

    // test les fonctions 

    int dim;
    printf("donner le nombre des etudiants :");
    scanf("%d",&dim);
// declarer un tab des etudiants et le remplir
    Etudiant etudiant[dim];
    remplirTableauEtudiants(etudiant,dim);
    // afichage de tableau
    affichertab_etudiant(etudiant,dim,etudiant[0].date);
    //affichage par le nom ahmed
    affichertab_etudiant_parNom(etudiant,dim);
    afficher_par_annee(etudiant,dim,2010);

    return 0;
}