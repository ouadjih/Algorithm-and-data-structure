#include <stdio.h>

typedef struct Point{
    char nom[1];
    int x,y;
};
void createFile(FILE* file){
    struct Point p;

  printf("Enter nom de point: ");
  scanf("%s", &p.nom);

  printf("Enter x et y de point: ");
  scanf("%d %d", &p.x,&p.y);

  fprintf(file,"%s %d %d",p.nom,p.x,p.y);
  //fwrite(&p, sizeof(struct Point), 1, file);

  printf("Point a ete bien ajoute!\n");
}

int main() {
    FILE *fichier;
    int valeur;
    fichier = fopen("courbe.txt","w+");
    if(fichier == NULL){
        printf("(-) problem d'ouverture de fichier \n");
        return 1;
    }
    createFile(fichier);
    fclose(fichier);
    return 0;}
