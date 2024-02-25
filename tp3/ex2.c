#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **tab;  // Déclaration d'un double pointeur pour créer un tableau à deux dimensions
    int n, m;   // Déclaration des variables pour stocker le nombre de lignes et de colonnes

    // Demande à l'utilisateur d'entrer le nombre de lignes et de colonnes
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &m);

    // Allocation dynamique de mémoire pour les lignes du tableau
    tab = (int **)malloc(n * sizeof(int *));

    // Vérification si l'allocation a réussi
    if (tab == NULL) {
        printf("Erreur d'allocation de mémoire\n");
        return 1;
    }

    // Allocation dynamique de mémoire pour chaque colonne du tableau
    for (int i = 0; i < n; i++) {
        tab[i] = malloc(m * sizeof(int));
        // Vérification si l'allocation a réussi
        if (tab[i] == NULL) {
            printf("Erreur d'allocation de mémoire\n");
            // Libération de la mémoire allouée précédemment
            for (int j = 0; j < i; j++) {
                free(tab[j]);
            }
            free(tab);
            return 1;
        }
    }

    // Initialisation du tableau avec des valeurs
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tab[i][j] = i * j;
        }
    }

    // Affichage du contenu du tableau
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("(%d,%d) = %d ", i, j, tab[i][j]);
        }
        printf("\n");
        // Libération de la mémoire allouée pour chaque ligne du tableau
        free(tab[i]);
    }

    // Libération de la mémoire allouée pour le tableau
    free(tab);

    return 0;
}
