#include <stdio.h>


enum couleur_e { COEUR, CARREAU, PIQUE, TREFLE} ;
enum valeur_e { SEPT, HUIT, NEUF, DIX, VALET, DAME, ROI, AS } ;
struct carte { enum couleur_e couleur ; enum valeur_e valeur ; } ;

enum couleur2_e { COEUR2=3, CARREAU2, PIQUE2, TREFLE2} ;

int main(){

// qst1
    enum couleur_e c=COEUR;
    
    for(int i=0;i<4;i++){
        printf("la couleur de la carte est %d\n",c+i);
    }
    // qst 2 
    printf("Qestion 2\n");
    enum couleur2_e c2=COEUR;
    for(int i=3;i<7;i++){
        printf("la couleur de la carte est %d\n",c2+i);
    }
    return 0;
}