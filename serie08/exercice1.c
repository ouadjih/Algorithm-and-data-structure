#include<stdio.h>
#include<stdlib.h>

typedef struct etudiant{
    int mat;
    char nom[50];
    char prenom[50];
    float moyenne;
}etudiant;

int main(){
int nbrEtudiant;
etudiant E;
printf("Donner le nombre d'etudiant");
scanf("%d",&nbrEtudiant);

FILE * fichier =NULL;
fichier = fopen("ETUDIANT2.txt","a");

//Remplissage de fichier
for(int i=0;i<nbrEtudiant;i++){
    printf("donner matricule :");
    scanf("%d",&E.mat);
    printf("donner nom :");
    scanf("%s",&E.nom);
    printf("donner prenom :");
    scanf("%s",&E.prenom);
    printf("donner moyenne :");
    scanf("%f",&E.moyenne);
    fprintf(fichier,"%d %s %s %f\n",E.mat,E.nom,E.prenom,E.moyenne);
}
fclose(fichier);
printf("Remplissage termine...\n");


//SUPPRISSION de fichier

fichier = fopen("ETUDIANT2.txt","w");
 while (fscanf(fichier, "%d %s %s %f",&E.mat, &E.nom, &E.prenom, &E.moyenne) != EOF) {
 if(E.moyenne<10){
     fseek(fichier, -strlen(E.mat), SEEK_CUR);
     fprintf(fichier, "%s","");
 }
  }
printf("\n supprission termine\n");

fclose(fichier);

//Affichage de fichier1

fichier = fopen("ETUDIANT.txt","r");

 while (fscanf(fichier, "%d %s %s %f",&E.mat, &E.nom, &E.prenom, &E.moyenne) != EOF) {
    printf("\n%d %s %s %f",E.mat, E.nom, E.prenom, E.moyenne);
  }
fclose(fichier);
return 0;
}
