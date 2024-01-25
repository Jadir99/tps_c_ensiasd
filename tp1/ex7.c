#include <stdio.h>

int main(){


    int age ,taille, poids,BMI;
    char sexe;
    printf("donner votre age :");
    scanf("%d",&age);
    printf("donner votre taille :");
    scanf("%d",&taille);
    printf("donner votre poids :");
    scanf("%d",&poids);
    printf("donner votre sexe :");
    scanf("%c",&sexe);

    if(sexe=='f'||sexe=='F')
        printf(" le poids ideal est : %d\n",(taille*100)-(taille-150)/2);
    else if(sexe=='h'||sexe=='H')
        printf(" le poids ideal est : %d\n",(taille*100)-(taille-150)/4);

    // BMI
    BMI=poids/((taille/100)*2);
    printf("le BMI est %d",BMI);


    if(BMI<27)
    printf("Normale");
    else if(BMI>=27 && BMI <32)
    printf("Obese");
    else if(BMI>=32 )
    printf("malade");
    return 0;
}