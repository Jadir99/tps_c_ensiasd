
#include <stdio.h>

int main (){

    // programme qui calcule le factoriel d'un nombre 

    int n ,f1=1,f2=1,f3=1;
    printf ("donner un nombre entier ");
    scanf ("%d",&n);

    if (n>=1){// avec for 
    for (int i=n;i>=1;i--){f1=f1*i;}

    printf ("le factoriel de %d est %d\n",n,f1);
    // avec while 
    int i=n;
    while (i!=0){
        f2=f2*i;
        i--;
    }

    printf ("le factoriel de %d est %d\n",n,f2);
    // with do while 
    i=n;
    do{
        f3=f3*i;
        i--;
    }while (i!=0);

    printf ("le factoriel de %d est %d\n",n,f3);
    }else{
        printf ("le nombre doit etre positif\n");
        }
    return 0;
}