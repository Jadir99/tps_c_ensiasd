#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

FILE* ouvrir_fichier( char *nom_fichier,  char *mode) {
    FILE *fichier = fopen(nom_fichier, mode);
    if (fichier == NULL) {
        fprintf(stderr, "Erreur lors de l'ouverture du fichier %s : %s\n", nom_fichier, strerror(errno));
        exit(EXIT_FAILURE);
    }
    return fichier;
}

int main() {
    FILE *fichier = ouvrir_fichier("example.txt", "r");
    printf("Fichier ouvert avec succès !\n");
    fclose(fichier);
    return 0;
}

