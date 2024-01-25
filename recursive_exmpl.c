#include <stdio.h>



int somme(int n){
    if(n==1)
    return 1;
    return n+somme(n-1);
}

int pgcd(int a, int b){
    
    if(a==b)
    return a;
    if(a>b)
    return pgcd(a-b,b);
    return pgcd(a,b-a);
}

int div(int a,int b){
    if(a<b)return 0;
    return 1+div(a-b,b);
}

int binaire(int nbr,int dec){
    if(nbr==0)return 0;
    return binaire(nbr/2,dec*10)+dec*(nbr%2);
}
int puissance(int a,int b){
    if(b==0)return 1;
    return a*puissance(a,b-1);
}
void affiche_pyramide(char c, int h){
    if(h>=0){
        affiche_pyramide(c,h-1);
        
            while(h!=0){
                printf("%c",c);
                h--;
            }
        
        printf("\n");
    }
}

int main(){

    printf("%d\n",pgcd(4,2));
    printf("%d \n",somme(3));
    printf("%d\n",div(4,2));
    printf("%d",binaire(5,1));
    affiche_pyramide('c', 5);
    return 0;
}