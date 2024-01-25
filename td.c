
#include <stdio.h>

//passage par valeur 
int somme1(int x,int y){
    printf(" %d\n",x+y);
    return x+y;
}

void somme2(int x, int y){
    printf("%d",x+y);
}
// passage par adresse 
int somme3(int *x,int *y){
    return *x+*y;
}

void somme4(int *x,int *y){
     *x=*x+*y;
}

int main(){


    int a=3,b=5;
    printf("%d\n",somme1(1,2));
    somme2(1,2);  
    printf("%d\n",somme3(&a,&b));
    somme4(&a,&b);
    printf("%d",a);



    return 0;
}
int TEST(){

    int t[5];
// la lecture d'un table 
    for (int i=0;i<5;i++){
        printf("donne un nombre %d",i+1);
        scanf("%d",&t[i]);
    }

//l'affichage 
    for (int i=0;i<5;i++) printf("%d",t[i]);


 
    int pgp,ppi,existep=0,existei=0;
    // ana hna wax kayn hna dikart
    for (int i=0;i<5;i++){
        if (t[i]%2==0){
            //initialisation
            pgp=t[i];
            existep=1;
        }else{
            ppi=t[i];
            existei=1;
        }
    }
    for(int i=0;i<5;i++){
        if (t[i]%2==0 && pgp<t[i]){
            pgp=t[i];
        }else if (t[i]%2==1 && ppi>t[i]){
            ppi=t[i];
        }
    }
    if (existep==1)
    printf(" le pgp est :%d\n",pgp);
    if (existei==1)
    printf(" le ppi est :%d\n",ppi);

}