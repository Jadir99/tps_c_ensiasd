#include  <stdio.h>
#include  <math.h>


int maximum(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}
int minimum(int a, int b){
    if (a<b){
        return a;
    }else{
        return b;
    }
}

// la fonction qui afficher la miroire d'un nombre 
void miroire(int nombre ){
    while(nombre!=0){
        printf("%d",nombre%10);
        nombre=nombre/10;
    }
}
int main(){

    // ex11 

    printf ("------------------------eXERCICE1------------------------\n");
    int e,f,g;
    printf ("doner 3 nombres entiers : ");
    scanf ("%d %d %d",&e,&f,&g);

    if(e>=f && f>=g) printf("ranger par ordre DEcroissant \n");
    else if(e<=f && f<=g)printf("ranger par ordre croissant \n");
    else printf("non ordone \n");



    // ex2222 la resolution d'un equation de degre 2 
printf ("------------------------eXERCICE2------------------------\n");
    int delta,x1,x2,a,b,c;

    printf ("donner les 3 coefficients de l'equation : a b c : ");
    scanf ("%d %d %d",&a,&b,&c);
    delta=b*b-4*a*c;
    if (delta==0){
        // un solution 
        x1=(-b)/(2*a);
        printf("l'equation admet un solution que est : %d \n",x1);
    }else if (delta>0){
        // deux solutions
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("x1=%d et x2=%d \n",x1,x2);
    }else printf("l'equation n'admet pas de solution dasn R \n");

    // ex3 les nombres des jours 
printf ("------------------------eXERCICE3------------------------\n");
    int j;
    printf("donner un nombre de jours : ");
    scanf ("%d",&j);

    switch (j)
    {
        case 1:printf("Lundi \n");break;
        case 2:printf("Mardi \n");break;
        case 3:printf("Mercredi \n");break;
        case 4:printf("Jeudi\n");break;
        case 5:printf("Vendredi \n");break;
        case 6:printf("Samedi \n");break;
        case 7:printf("Dimanche \n");break;

        default: printf("le nombre n'est pas un jour \n");
            break;
    }

    // EX4 la recursivite avec for 

printf ("------------------------eXERCICE4------------------------\n");
    printf ("donner 2 nombres entiers : ");
    scanf ("%d %d",&a,&b);

    while (a!=b)
    {
        if(a>b)a=a-b;
        else b=b-a;
    }
    printf ("le PGCD EST  %d \n",a);

    // ex5 est parfait 
    printf ("------------------------eXERCICE5------------------------\n");

    int nombre, i=1,parfait=0;

    printf("donner un nombre entier ");
    scanf ("%d",&nombre);

    
    while (i!=nombre/2){
        if(nombre%i==0){
            parfait+=i;
        }
        i++;
    }

    if(parfait==nombre)printf("est un nombre parfait \n");
    else printf("n'est pas un nombre parfait \n");



    // /ex6  les nombres entiers seulement 
printf ("------------------------eXERCICE6------------------------\n");

    int nbr,somme=0,somme_imp=0,somme_p=0, nbr_iterations=0 ,tmp;
    do{
        printf("donner un nombre entier ");
        scanf ("%d",&nbr);
        tmp=nbr;
        if(nbr>=0){
            somme+=nbr;
            nbr_iterations++;
            if (tmp%2==0){
                somme_p+=nbr;
            }else{
                somme_imp+=nbr;
            }
        }else{
            printf("le nombre doit etre positif \n");
        }
    }while(nbr>=0);

    printf("la somme des nombres est : %d \n",somme);
    printf("la somme des nombres impairs est : %d \n",somme_imp);
    printf("la somme des nombres paires est : %d \n",somme_p);
    printf("le nombre d'iterations est : %d \n",nbr_iterations);
    // /ex7 les tableaux 
printf ("------------------------eXERCICE7------------------------\n");
    int dim;
    printf("donner la dimension du tableau : ");
    scanf ("%d",&dim);

    int t[dim];

    for(int i=0; i<dim; i++){
            printf("donner un nombre : tab[%d]:  ",i+1);
            scanf("%d", &t[i]);
    }
    


// calcule la somme et chercher sur le min et le max 
    int s=0,min=t[0],max=t[0];

    for (int i=0; i<dim;i++){
        s+=t[i];
        min=minimum(min,t[i]);
        max=maximum(max,t[i]);
    }

    // l'affichage 

    printf("la somme est : %d \n",s);
    printf("le min est : %d \n",min);
    printf("le max est : %d \n",max);

    // /qst 4 
    printf("donner un nombre pour on cherche dans le tableau : ");
    scanf ("%d",&nbr);

    for (int i = 0; i < dim ; i++)
    {
        if (t[i]==nbr)
        {
            printf("le nombre est present a l'indice %d \n",i);
            break;
        }
    }
    



   //5



   //6 AFFICHAGE 
   for (int i=0; i<dim;i++)
    printf("tab[%d] = %d\n",i,t[i]); 
    

    // qst 7 l'unverse de tableau 
printf("***************************************l'inverse est ***************************************");
    i=0,j=dim-1,tmp;
    while (i!=dim/2)
    {
        tmp=t[i];
        t[i]=t[j];
        t[j]=tmp;
        i++;
        j--;
    }


    for (int i=0; i<dim;i++)
    printf("tab[%d] = %d\n",i,t[i]);
    


    printf("--------------------------------------------exercice 8--------------------------------------------\n");
    //deja fait 
    
    printf("--------------------------------------------exercice 9--------------------------------------------\n");
    
    printf("donner un nombre entier");
    scanf("%d",&nbr);
    printf("l'image de miroire est : ");
    miroire(nbr);

    printf("--------------------------------------------exercice 10--------------------------------------------\n");

    

    return 0;
}