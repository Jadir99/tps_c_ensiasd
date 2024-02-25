#include <stdio.h>

int main() {
    // Déclaration des pointeurs de fichiers et des noms de fichiers sources et de destination
    FILE *sourceF, *destF;
    char sourceName[] = "ex5tp3.c";
    char destName[] = "copie_ex_n.c";
    char charac;

    // Ouverture du fichier source en mode lecture
    sourceF = fopen(sourceName, "r");
    if (sourceF == NULL) {
        printf("Erreur lors de l'ouverture du fichier source");
        return 1;
    }

    // Ouverture du fichier destination en mode écriture
    destF = fopen(destName, "w");
    if (destF == NULL) {
        printf("Erreur lors de la création du fichier destination");
        fclose(sourceF);
        return 1;
    }

    // Copie du contenu du fichier source vers le fichier destination
    while ((charac = fgetc(sourceF)) != EOF) {
        fputc(charac, destF);
    }

    // Fermeture des fichiers source et destination
    fclose(sourceF);
    fclose(destF);

    // Affichage d'un message indiquant que la copie a été réussie
    printf("Le code a été copié avec succès dans %s.\n", destName);

    return 0;
}
