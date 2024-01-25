#include <stdio.h>

int main(){

    int j;
    printf("donner un nombre pour le jours par ex : 1 est pour dimanche ... :");
    scanf ("%d", &j);

    if(j==2 || j==6)
        printf("vous avez un cours ");
    else if(j==7)
        printf("vous avez un DS");
    else if(j==1)
        printf("repo");


    return 0;
}