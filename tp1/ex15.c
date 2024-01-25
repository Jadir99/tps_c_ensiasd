#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){

    char text[200];

    printf("donner un texte : ");
    fgets(text, sizeof(text), stdin);
    printf("le texte est : %s",text);
    // free(text);
    int i = 0,compteur=0;
    while(text[i] != '\0'){
        if(isspace(text[i])){
            compteur++;
        }
        i++;
    }
    printf("%d",--compteur);
    return 0;
}