#include<stdio.h>
#include<string.h>

typedef struct nombreComplexe
{
    int reelle;
    int imaginaire;
} complexe;

typedef struct Etudiant
{
    char nom[30];
    char prenom[30];
    int unsigned age;
    float moyenne;
} Etudiant;


typedef struct Date
{
    int jour,mois,annee;
} Date;



typedef struct Adresse
{
    int numero;
    char rue[20],villa[20],wilaya[20];

} Adresse;

typedef struct Enseignant
{
    char nom[20],prenom[20],grade[20];
    Date date_naiss;
    Adresse residence;
    Date Annee_de_recrutement;
} Enseignant;
int main()
{
    /*Exercice01 :
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



     Exercice 02 :

    Etudiant etudiant[100];
    float moyenne_general,s=0;
    int n=2;

    for(int i = 0; i<n; i++)
    {
        printf("\nEtudiant %d : ",i+1);
        printf("\n  nom : ");
        scanf("%s",&etudiant[i].nom);
        printf("  prenom : ");
        scanf("%s",&etudiant[i].prenom);
        printf("  age : ");
        scanf("%d",&etudiant[i].age);
        printf("  Moyenne : ");
        scanf("%f",&etudiant[i].moyenne);
         s=s+etudiant[i].moyenne;

    }
    printf("------- Affichage de resultat pour chaque d'etudiant -------");
    for(int i = 0; i<n; i++)
    {
        printf("\nEtudiant %d : ",i+1);
        printf("\n  nom : %s",etudiant[i].nom);
        printf("\n  prenom : %s",etudiant[i].prenom);
        printf("\n  age : %d",etudiant[i].age);
        printf("\n  Moyenne : %f",etudiant[i].moyenne);
        if(etudiant[i].moyenne>=10)
        {
            printf("\nRESULTAT : ADMIS");
        }
        else
        {
            printf("\n RESULTAT : AJOURNE");
        }

    }
    moyenne_general=s/n;
    printf("\nMoyenne genral : %f",moyenne_general);
*/

 Enseignant T[100];
 int n;
 printf("Entrez le nombre d'enseignant");
 scanf("%d",&n);

 for(int i=0;i<n;i++){
    printf("\nEnseignant 1 : ");
    printf("\n  nom : ");
    scanf("%s",&T[i].nom);
    printf("  prenom : ");
    scanf("%s",&T[i].prenom);
    printf(" Date de naissance jour pui mois pui annee : ");
    scanf("%d %d %d",&T[i].date_naiss.jour,&T[i].date_naiss.mois,&T[i].date_naiss.annee);
    printf("  residence numero ,rue, wilaya, villa : \n");
    scanf("%d %s %s %s",&T[i].residence.numero,&T[i].residence.rue,&T[i].residence.wilaya,&T[i].residence.villa);
    printf("  Grade : ");
    scanf("%s",&T[i].grade);
    printf("  Annee de recrutement : ");
    scanf("%d %d %d",&T[i].Annee_de_recrutement.jour, &T[i].Annee_de_recrutement.mois, &T[i].Annee_de_recrutement.annee);
    printf("done ! ");
 }



    return 0;

}
