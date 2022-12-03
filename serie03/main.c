#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*
    // Exercice 01
    //a
    float tab[9],somme,moyenne;
    for(int i = 0; i<9;i++){
        printf("tab[%d] = ",i+1);
        scanf("%f",&tab[i]);
        somme +=tab[i];
    }
    moyenne = somme/9;
    printf("La Somme est : %f \n",somme);
    printf("La Moyenne est : %f ",moyenne);
    //b
    int tabCoef[9],sommeCoef,newSomme;

    for(int i = 0; i<9;i++){
        printf("\nCoef de tab[%d]",i+1);
        scanf("%d",&tabCoef[i]);
        sommeCoef += tabCoef[i];
        newSomme = tab[i]*tabCoef[i];
    }
    printf("La Moyenne avec tab coef est : %f ",newSomme/sommeCoef);


    // Exercice 02
    int tab[10],n,min;
    do
    {
        printf("donner nombre d'element de tableau positive\n");
        scanf("%d",&n);
    }
    while(n <= 0);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&tab[i]);
    }
    //plus petit de ces nombre
    min=tab[0];
    for(int i=0; i<n; i++)
    {
        (tab[i]<min)?min=tab[i]:min;
    }
    printf("\nle min de tableau est : %d",min);
    */
    //Exercice 03
    int tab[100],n,tmp;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("Tab[%d] = ",i+1);
        scanf("%d",&tab[i]);
    }
    //inverser le tableau
    int firstval = tab[0];

    for(int i =0;i<n;i++){
        tab[n-i+1]=tab[i];
    }


    for(int i =0;i<n;i++){
         printf("Tab[%d] = %d\n",i+1,tab[i]);
    }
    return 0;
}
