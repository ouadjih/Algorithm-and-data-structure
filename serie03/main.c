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

    //Exercice 03
    int tab[100],tabInverser[100],n;
    printf("Entrer la taille de tableau");
    scanf("%d",&n);
    //inverser le tableau
    for(int i = 1; i<=n; i++)
    {
        printf("Tab[%d] = ",i);
        scanf("%d",&tab[i]);
        tabInverser[n-i+1]=tab[i];
    }
    //affichage de tableau inverser
    printf("\nLe tableau inverser est :\n");
    for(int i =1; i<=n; i++)
    {
        printf("Tab[%d] = %d\n",i+1,tabInverser[i]);
    }


    //Exercice 04 scinder/split -+
    int tab[100],tabpos[100],tabneg[100],n,tn=0,tp=0;
    printf("Entrer la taille de tableau");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++)
    {
        printf("Tab[%d] = ",i);
        scanf("%d",&tab[i]);
        if(tab[i]>=0)
        {
            tabpos[tp]=tab[i];
            tp++;
        }
        if(tab[i]<0)
        {
            tabneg[tn]=tab[i];
            tn++;

        }
    }
    //tab positive
    printf("\nTableau positive\n");
    for(int i =0; i<tp; i++)
    {
        printf("tabpositive[%d]= %d\n",i,tabpos[i]);
    }

    //tab negative
    printf("\nTableau negative\n");
    for(int i =0; i<tn; i++)
    {
        printf("tabpositive[%d]= %d\n",i,tabneg[i]);
    }


    //Exercice05 chercher une val dans un tableau
    int tab[]={1,2,1-5,3,4,10},val,indice;
    for(int i =0; i<7; i++)
        {
            printf("tab[%d]= %d\n",i,tab[i]);
        }

    printf("Entrer une valeur ?\n");
    scanf("%d",&val);
    indice=-1;
    for(int i =0; i<7; i++)
        {
            if(tab[i]== val) {
                    indice=i;
            }
        }
        indice==-1?return indice:printf("l'indice de %d rechercher est :%d",val,i);

      */
    //Exercice06
    int tab[1000],val,debut=0,pos,n,milieu,fin,arret=0;
    printf("Entrer la taille de tableau:\n");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++)
    {
        printf("Tab[%d] = ",i);
        scanf("%d",&tab[i]);
    }
    printf("Entrer une valeur a rechercher?\n");
    scanf("%d",&val);

    fin=n-1;

    while(debut<=fin && arret == 0)
    {
        milieu = (debut+fin)/2;
        if(val==tab[milieu])
        {
            pos=milieu;
            arret=1;
        }
        else
        {
            if(val>tab[milieu])
                debut=milieu+1;
            if(val<tab[milieu])
                fin=milieu-1;

        }
    }
    if(arret==1)
    {
        printf("%d est trouve a la position: %d",val,pos);
    }
    else
    {
        printf("n'existe pas dans le tableau");
    }


    return 0;
}
