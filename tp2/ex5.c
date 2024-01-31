#include <stdio.h>
#include <stdlib.h>


// creation of temps type 
    typedef struct{
        int heure;
        int minute;
        int seconde;
    }TEMPS;
void Somme_temps(TEMPS *T,TEMPS temp1,TEMPS temp2){

    T->heure=temp1.heure+temp2.heure;
    T->minute=temp1.minute+temp2.minute;
    T->seconde=temp1.seconde+temp2.seconde;

}

int  TRANSFORM_ENSECONDE(TEMPS temps){
    return temps.seconde+temps.heure*60*60+temps.minute*60;
}

TEMPS Decompose(int t){
    TEMPS temps;
    temps.heure=t/(60*60);
    temps.minute=(t%(60*60))/60;
    temps.seconde=(t%(60*60))%60;
    return temps;
}
void afficher_temps(TEMPS t){
    printf("heure = %d minute=%d seconde=%d\n",t.heure,t.minute,t.seconde);
}

TEMPS Somme_temps2(TEMPS *T,TEMPS temp1,TEMPS temp2){
    
    int t=TRANSFORM_ENSECONDE(temp1)+TRANSFORM_ENSECONDE(temp2);
    return Decompose(t);

}



int main(){

    
    TEMPS temps,temp1,temp2,T;

    temps.heure =1;
    temps.minute =3;
    temps.seconde =4;

    temp1.heure =1;
    temp1.minute =3;
    temp1.seconde =4;

    temp2.heure =1;
    temp2.minute =3;
    temp2.seconde =4;


    // tester les fonctions 
    

    printf("\n================================la affichage avant de somme==========================================\n");
    afficher_temps(temps);
    Somme_temps(&T,temp1,temp2);
    printf("\n================================la affichage apres de somme==========================================\n");
    afficher_temps(T);

    printf("\n================================la transformation====================================================\n");
    printf("la valeur de temps en seconde est : %d\n",TRANSFORM_ENSECONDE(temps));
    int t;
    printf ("donner un valeur en seconde :");
    scanf("%d",&t);
    // affichage de temps apres la decompose 
    afficher_temps(Decompose(t));
    printf("\n================================la SOMME2====================================================\n");
    temp1.heure =23;
    temp1.minute =59;
    temp1.seconde =4;

    temp2.heure =3;
    temp2.minute =3;
    temp2.seconde =4;
    // afficher le temps apres la deuxieme methode de la somme 
    afficher_temps(Somme_temps2(&T,temp1,temp2));



    return 0;
}