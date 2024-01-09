#include <stdio.h>


int maximum(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}
int main (){
    int x,y,z;
    printf("donner 3 nombres entiers : ");
    scanf("%d %d %d",&x,&y,&z);

    printf("le nombre le plus grand est :%d",maximum(x,maximum(y,z)));

    return 0;
}