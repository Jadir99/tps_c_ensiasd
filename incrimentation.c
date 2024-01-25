#include <stdio.h>

int main(){


    int tab[10], i;
    int *p;
    p=tab;
    for(i=0;i<10;i++)
    {
        printf("Saisir tab[%d] :",i+1);
        scanf("%d",p+i);// ou : scanf("%d",tab+i);
    }

    for ( i = 0; i < 10; i++)
    {
        printf(" tab[%d] = %d ",i+1,tab[i]);
        printf(" tab[%d] = %d ",i+1,*(p+i));
        printf(" tab[%d] = %d ",i+1,*(tab+i));
        printf("\n");
    }
    
    return 0;
}