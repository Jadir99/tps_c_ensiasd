#include <stdio.h>


int main(){
// exercice 2 
    int t,j,h,min,s;
    printf("donner le temps en secondes : ");
    scanf("%d",&t);
    j=t/(24*60*60);
    t=t%(24*60*60);
    h=t/(60*60);
    t=t%(60*60);
    min=t/60;
    s=t%60;

    printf("jours %d heures %d min %d sec %d",j,h,min,s);
    return 0;
}