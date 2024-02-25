#include <stdio.h>
#include <stdlib.h>

// Définition de la structure personne
typedef struct {
    char nom[20];
    int age;
} personne;

int main() {
    // Question 1
    char *nom; // Déclaration d'un pointeur de caractère pour le nom
    int *age; // Déclaration d'un pointeur d'entier pour l'âge

    // Allocation dynamique de mémoire pour le nom et l'âge
    nom = malloc(10 * sizeof(char)); // Allocation pour le nom, 10 caractères maximum
    age = malloc(sizeof(int)); // Allocation pour l'âge

    // Vérification si l'allocation a réussi
    if (nom == NULL || age == NULL) {
        printf("Erreur d'allocation de mémoire\n");
        return 1;
    }

    // Demande à l'utilisateur de fournir le nom et l'âge
    printf("Entrez le nom : ");
    scanf("%s", nom);
    printf("Entrez l'âge : ");
    scanf("%d", age);

    // Affichage des informations saisies
    printf("Le nom est : %s, l'âge est : %d \n", nom, *age);

    // Libération de la mémoire allouée
    free(nom);
    free(age); 

    // Question 2
    int n; // Déclaration d'une variable pour le nombre de personnes
    personne *tab; // Déclaration d'un pointeur vers un tableau de personnes

    // Demande à l'utilisateur de fournir le nombre de personnes
    printf("Entrez un nombre n : ");
    scanf("%d", &n);

    // Allocation dynamique de mémoire pour le tableau de personnes
    tab = malloc(n * sizeof(personne));

    // Vérification si l'allocation a réussi
    if (tab == NULL) {
        printf("Erreur d'allocation de mémoire\n");
        return 1;
    }

    // Demande à l'utilisateur de fournir les informations pour chaque personne
    for (int i = 0; i < n; i++) {
        printf("Entrez le %dème nom : ", i + 1);
        scanf("%s", tab[i].nom);
        printf("Entrez le %dème âge : ", i + 1);
        scanf("%d", &tab[i].age);
    }

    // Affichage des informations des personnes
    for (int i = 0; i < n; i++) {
        printf("Le nom de la personne numéro %d : %s \n", i + 1, tab[i].nom);
        printf("L'âge de la personne numéro %d : %d \n", i + 1, tab[i].age);
    }

    // Libération de la mémoire allouée
    free(tab);

    return 0;
}
