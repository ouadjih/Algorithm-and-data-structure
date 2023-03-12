#include<stdio.h>

typedef struct complexe {
    int reelle;
    int imaginaire;
}complexe;

int main(){
    /*Exercice01 : */
    complexe z1,z2,somme_complexe,produit_complexe;

    printf("Donner la partie reelle pui l'imaginaire de z1 : ");
    scanf("%d %d",&z1.reelle,&z1.imaginaire);
    printf("Donner la partie reelle pui l'imaginaire de z2 : ");
    scanf("%d %d",&z2.reelle,&z2.imaginaire);

    printf("\nz1 = %d+%di",z1.reelle,z1.imaginaire);
    printf("\nz2 = %d+%di",z2.reelle,z2.imaginaire);

   somme_complexe.reelle= z1.reelle+z2.reelle;
   somme_complexe.imaginaire= z1.imaginaire+z2.imaginaire;

    printf("\nz1+z2 = %d + %di",somme_complexe.reelle,somme_complexe.imaginaire);

    produit_complexe.reelle= z1.reelle*z2.reelle - z1.imaginaire*z2.imaginaire;
    produit_complexe.imaginaire= z1.reelle*z2.imaginaire + z1.imaginaire*z2.reelle;

    printf("\nz1*z2 = %d + %di",produit_complexe.reelle,produit_complexe.imaginaire);


}
