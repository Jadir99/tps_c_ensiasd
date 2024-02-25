#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char **argv){


    // le nombre des parametres :
    printf("le nombre des parametres  = %d\n", argc);
    // affichage de parametres :
    int i=1;
    while(argc >0){
        // printf("%s",argv[i]);
        int num = atoi(argv[i]);  // Convert the string to an integer
        printf("%d\n", num); 
        argc--;
        i++;
    }
    return 0;
}