#include <stdio.h>
#include <stdlib.h>


int main()
{
    //Exercice1: la presence d'un caract�re dans une chaine

    char x = 'B';
    char chaine[200]="c'est une chaine de caracetere";
    for (int i = 0; i<31; i++){
        if(x == chaine[i]){ printf("le caractere existe"); return 0;}
    }
    printf("le caract�re n'existe pas !");
    return 0;
    //Exercice 2:

}
