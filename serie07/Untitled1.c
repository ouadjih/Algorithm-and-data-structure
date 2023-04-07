
#include<stdio.h>
#include<stdlib.h>

int main(){
    //demander un espace memoire manuellement d'une taille entier
    int * ptr= NULL;
    ptr =  malloc(sizeof(int));
    printf("%d",ptr);

   free(ptr);
    printf("\n memoire liberer");
    printf("%d",ptr);

}
