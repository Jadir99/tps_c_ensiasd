#include <stdio.h>
#include <stdlib.h>

// Définition de la structure Date
typedef struct {
    int jours;
    int mois;
    int annee;
} Date;

// Définition de la structure Adresse
typedef struct {
    int maison;
    char rue[100];
    char ville[30];
} Adresse;

// Définition de la structure Etudiant
typedef struct {
    long int cne;
    char nom[20];
    char prenom[20];
    Date date;
    Adresse adresse;
    char email[20];
    int tel;
    char siteweb[30];
} Etudiant;

int main()
{
    Etudiant *etd;  // Déclaration d'un pointeur vers un tableau d'étudiants
    FILE *f;        // Déclaration d'un pointeur de fichier
    etd = malloc(100 * sizeof(Etudiant));  // Allocation dynamique de mémoire pour les étudiants

    // Vérification si l'allocation a réussi
    if (etd == NULL) {
        printf("Erreur d'allocation de mémoire\n");
        return 1;
    }

    // Boucle pour saisir les informations des étudiants
    for(int i = 0; i < 2; i++) {
        printf("Entrez le CNE de l'étudiant %d : ", i + 1);
        scanf("%ld", &etd[i].cne);
        printf("Entrez le nom de l'étudiant %d : ", i + 1);
        scanf("%s", etd[i].nom);
        printf("Entrez le prénom de l'étudiant %d : ", i + 1);
        scanf("%s", etd[i].prenom);
        printf("Entrez le jour d'ajout de l'étudiant %d : ", i + 1);
        scanf("%d", &etd[i].date.jours);
        printf("Entrez le mois d'ajout de l'étudiant %d : ", i + 1);
        scanf("%d", &etd[i].date.mois);
        printf("Entrez l'année d'ajout de l'étudiant %d : ", i + 1);
        scanf("%d", &etd[i].date.annee);
        printf("Entrez le numéro de maison de l'étudiant %d : ", i + 1);
        scanf("%d", &etd[i].adresse.maison);
        printf("Entrez le nom de la rue de l'étudiant %d : ", i + 1);
        scanf("%s", etd[i].adresse.rue);
        printf("Entrez la ville de l'étudiant %d : ", i + 1);
        scanf("%s", etd[i].adresse.ville);
        printf("Entrez l'email de l'étudiant %d : ", i + 1);
        scanf("%s", etd[i].email);
        printf("Entrez le numéro de téléphone de l'étudiant %d : ", i + 1);
        scanf("%d", &etd[i].tel);
        printf("Entrez le site web de l'étudiant %d : ", i + 1);
        scanf("%s", etd[i].siteweb);
    }

    // Ouverture du fichier "annuaire.txt" en mode écriture (append)
    f = fopen("annuaire.txt", "a+");
    if (f != NULL) {
        // Écriture des informations des étudiants dans le fichier
        for(int i = 0; i < 2; i++) {
            fprintf(f, "Etudiant %d : CNE : %ld, Nom : %s, Prénom : %s, Date : %d %d %d, Adresse : %d %s %s, Email : %s, Numéro de téléphone : %d, Site web : %s.\n",
                    i + 1, etd[i].cne, etd[i].nom, etd[i].prenom, etd[i].date.jours, etd[i].date.mois, etd[i].date.annee,
                    etd[i].adresse.maison, etd[i].adresse.rue, etd[i].adresse.ville, etd[i].email, etd[i].tel, etd[i].siteweb);
        }
    } else {
        printf("Erreur lors de l'ouverture du fichier\n");
    }

    // Fermeture du fichier
    fclose(f);

    // Libération de la mémoire allouée pour les étudiants
    free(etd);

    return 0;
}
