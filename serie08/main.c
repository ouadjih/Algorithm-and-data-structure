#include<stdio.h>
#include<stdlib.h>

 /*
    r: read
    w: write
    a: append


    fichier = fopen("file.txt","a");

    if(fichier == NULL){
        printf("le fichier n'existe pas");
    }else{
        /*traitment
        fputs("MI groupe 07",fichier);
    }
*/
int main(){

    FILE* fichier = NULL;

if(fichier == NULL){
        printf("fichier n'exsite pas");
    }
    else{
        char c ;
        do{
            c = fgetc(fichier);
            printf("%c",c);
         }while(c != EOF);
    }
    printf("\nfin du programme");


}
