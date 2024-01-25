#include <stdio.h>
#include <ctype.h>

void afficherCaractereEtoiles(char c) {
    const int rows = 5;
    const int cols = 4;
    const char* caracteres[36][5] = {
        {"* *", "* *", "***", "* *", "* *"},   // 0 or A
        {"** ", " * ", " * ", " * ", "***"},   // 1 or B
        {"* *", "*  ", "*  ", "*  ", "* *"},   // 2 or C
        {"** ", "* *", "* *", "* *", "** "},   // 3 or D
        {"***", "*  ", "** ", "*  ", "***"},   // 4 or E
        {"***", "*  ", "** ", "*  ", "*  "},   // 5 or F
        {"* *", "*  ", "* **", "* *", "* *"},  // 6 or G
        {"* *", "* *", "***", "* *", "* *"},   // 7 or H
        {"***", " * ", " * ", " * ", "***"},   // 8 or I
        {"  *", "  *", "  *", "* *", "* "},    // 9 or J
        {"* *", "** ", "*  ", "** ", "* *"},   // 10 or K
        {"*  ", "*  ", "*  ", "*  ", "***"},   // 11 or L
        {"* *", "***", "***", "* *", "* *"},   // 12 or M
        {"* *", "* *", "***", "***", "* *"},   // 13 or N
        {"* *", "* *", "* *", "* *", "* *"},   // 14 or O
        {"** ", "* *", "** ", "*  ", "*  "},   // 15 or P
        {"* *", "* *", "* *", "***", "  *"},   // 16 or Q
        {"** ", "* *", "** ", "** ", "* *"},   // 17 or R
        {"* *", "*  ", "* *", "  *", "* *"},   // 18 or S
        {"***", " * ", " * ", " * ", " * "},   // 19 or T
        {"* *", "* *", "* *", "* *", "***"},   // 20 or U
        {"* *", "* *", "* *", "***", " * "},   // 21 or V
        {"* *", "* *", "***", "***", "* *"},   // 22 or W
        {"* *", " * ", " * ", " * ", "* *"},   // 23 or X
        {"* *", " * ", " * ", " * ", " * "},   // 24 or Y
        {"***", "  *", " * ", "*  ", "***"}    // 25 or Z
    };

    if (isalnum(c)) {
        int index;
        if (isdigit(c)) {
            index = c - '0';
        } else {
            index = toupper(c) - 'A';
        }

        for (int i = 0; i < rows; i++) {
            printf("%s\n", caracteres[index][i]);
        }
    } else {
        printf("Entrez un chiffre ou une lettre majuscule.\n");
    }
}

int main() {
    printf("Veuillez entrer un chiffre ou une lettre majuscule : ");
    char input[2];
    scanf("%s", input);

    if (input[1] == '\0') {  // Check if input is a single character
        afficherCaractereEtoiles(input[0]);
    } else {
        printf("Entrez uniquement un chiffre ou une lettre majuscule.\n");
    }

    return 0;
}
