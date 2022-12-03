
#include<stdio.h>


int main(){
    int tab[10], nbr, i;

    printf("Entre le nombre decimale a convertir: ");
    scanf("%d",&nbr);

    for(i=0; i<10; i++){
    //reste de division (mod)
        tab[i] = nbr%2;
        nbr=nbr/2;
    }
    printf("le nombre binaire est : ");
    for(i=i-1; i>=0;i--){
        printf("%d",tab[i]);
    }

    return 0;
}
