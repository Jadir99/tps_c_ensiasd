#include<stdio.h>
#include<stdlib.h>

// Function to count the number of characters in a file
int compte_c(FILE *f) {
    char charActuel;
    int compteur = 0;
    while ((charActuel = fgetc(f)) != EOF) {
        // Increment the counter if the character is not a space or newline
        if (charActuel != ' ' && charActuel != '\n')
            compteur++;
    }
    return compteur;
}

// Function to count the number of words in a file
int compte_m(FILE *F) {
    char charActuel, charPrec = 'a';
    int compteur = 0;
    while ((charActuel = fgetc(F)) != EOF) {
        // Check for a word boundary (space or newline) and increment the counter accordingly
        if (charActuel == ' ' || charActuel == '\n') {
            if (charPrec != ' ' && charPrec != '\n')
                compteur++;
        }
        charPrec = charActuel;
    }
    return compteur;
}

// Function to count the number of lines in a file
int compte_l(FILE *F) {
    int compteur = 0;
    char car;
    while ((car = fgetc(F)) != EOF) {
        // Increment the counter if the character is a newline
        if (car == '\n')
            compteur++;
    }
    // Increment the counter one more time if the last character is a newline
    if (car == '\n') compteur++;
    return ++compteur;
}

int main() {
    // Open the file in append mode to ensure it exists
    FILE *F = fopen("programmation.txt", "a+");
    if (F == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }

    // Print the contents of the file
    printf("Contenu du fichier :\n");
    int character;
    while ((character = fgetc(F)) != EOF) {
        putchar(character);
    }
    printf("\n");

    // Rewind the file pointer to the beginning of the file
    rewind(F);

    // Call functions to count characters, words, and lines in the file
    int car = compte_c(F); 
    rewind(F);
    int mots = compte_m(F);
    rewind(F);
    int lignes = compte_l(F);

    // Print the results
    printf("chars: %d, mots: %d, lignes: %d\n", car, mots, lignes);

    // Close the file
    fclose(F);
    return 0;
}
