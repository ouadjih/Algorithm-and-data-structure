#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercice 01
    /*
    int mat[100][100],n,m,s=0,p=1;
    //lire les dimensions
    printf("Entrer Nbr des lignes : ");
    scanf("%d",&n);
    printf("Entrer Nbr des colonnes : ");
    scanf("%d",&m);
    //remplir la matrice
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        scanf("%d",&mat[i][j]);
        }
    }
    //affichage de la matrice
    printf("La Matrice :");
     for(int i=0;i<n;i++){
            printf("\n");
         for(int j=0;j<m;j++){
            printf("%d",mat[i][j]);
            s=s+mat[i][j];
            p=p*mat[i][j];
            printf(" ");
        }
    }
    printf("\nla somme : %d",s);
    printf("\nle produit : %d",p);

    //Exercice 02

    typedef struct indice{
        int val;
        int i;
        int j;
    }Indice;

     int mat[100][100],n,m;
     Indice Imax,Imin;
      printf("Entrer Nbr des lignes : ");
        scanf("%d",&n);
        printf("Entrer Nbr des colonnes : ");
        scanf("%d",&m);
        //remplir la matrice
        for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
            }
        }
        //chercher le max et le min;
        Imax.val=Imin.val=mat[0][0];
        for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             if(mat[i][j]>Imax.val){
                Imax.val= mat[i][j];
                Imax.i=i;
                Imax.j=j;
             }
             if(mat[i][j]<Imin.val){
                Imin.val = mat[i][j];
                Imin.i=i;
                Imin.j=j;
             }
         }}
          printf("Le max est: %d et ses indices sont i = %d , j = %d",Imax.val,Imax.i,Imax.j);
          printf("\nLe min est: %d et ses indices sont i = %d , j = %d",Imin.val,Imin.i,Imin.j);

           printf("\nLa Matrice :");
     for(int i=0;i<n;i++){
            printf("\n");
         for(int j=0;j<m;j++){
            printf("%d",mat[i][j]);
            printf(" ");
        }
    }

    //Exercice 03/04:
    int mat[100][100],n,m,val,nbr_occ,tab_occ[100];
      printf("Entrer Nbr des lignes : ");
        scanf("%d",&n);
        printf("Entrer Nbr des colonnes : ");
        scanf("%d",&m);
         printf("Entrer la valeur a rechercher : ");
        scanf("%d",&val);
        //remplir la matrice
        for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            nbr_occ=0;
         for(int j=0;j<m;j++){
            if(mat[i][j]==val){
                nbr_occ++;
            }
         }
         //La modification

         tab_occ[i]=nbr_occ;
         printf("le nbr d'occurance est  dans la ligne %d est : %d\n",i,nbr_occ);
        }
          printf("Tableau d'occurance");
          for(int i=0;i<n;i++){
            printf("%4d",tab_occ[i]);
          }
         printf("\nLa Matrice :");
            for(int i=0;i<n;i++){
            printf("\n");
         for(int j=0;j<m;j++){
            printf("%d",mat[i][j]);
            printf(" ");
        }
    }

    //Exercice05:
    int mat[100][100],n;
    printf("Entrer Nbr des lIGNES/COLONNES : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    // Ligne par ligne
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j){mat[i][j]=0;}
        }
    }
    /* diagonal
    int i=0;
     while(i<n){
        mat[i][i]=0;
        i++;
     }*/
    /*
    printf("\nLa Matrice :");
    for(int i=0; i<n; i++)
    {
       printf("\n");
       for(int j=0; j<n; j++)
       {
           printf("%d",mat[i][j]);
           printf(" ");
       }
    }
     //Exerice 06 :
      int mat[100][100],n,flag=1;
    //lire les dimensions
    printf("Entrer Nbr des lignes et colonnes ( mat carre ) : ");
    scanf("%d",&n);
    //remplir la matrice
    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        scanf("%d",&mat[i][j]);
     }
    }
    //affichage de la matrice
    printf("La Matrice :");
     for(int i=0;i<n;i++){
            printf("\n");
         for(int j=0;j<n;j++){
            printf("%4d",mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        if(i !=j && mat[i][j]!=mat[j][i]){
            flag=0;
            break;
        }
     }
    }
    if(flag){
        printf("\nla matrice symetrique");
    }else{
        printf("\nla matrice n'est pas symetrique");
    }

    //Exerice 07 : produit de deux matrice
    int A[100][100],B[100][100],mul[100][100],n,m,p;
    //Nbr ligne de A doit egalement egale a nbr colonne de B
    printf("Entrer Nbr des lignes de A ");
    scanf("%d",&n);
    printf("Entrer Nbr des colonnes de A et lignes de b: ");
    scanf("%d",&m);
    printf("Entrer Nbr des colonnes de B: ");
    scanf("%d",&p);
    //Remplissage des mat a et b :
      for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
            }
       }
       for(int i=0;i<m;i++){
         for(int j=0;j<p;j++){
            scanf("%d",&B[i][j]);
            }
       }
      //Affichage de Matrice A
      printf("\nLa Matrice A :");
    for(int i=0; i<n; i++)
    {
       printf("\n");
       for(int j=0; j<m; j++)
       {
           printf("%d",A[i][j]);
           printf(" ");
       }
    }
      //Affichage de Matrice b
      printf("\nLa Matrice B:");
    for(int i=0; i<m; i++)
    {
       printf("\n");
       for(int j=0; j<p; j++)
       {
           printf("%d",B[i][j]);
           printf(" ");
       }
    }

    //multiplication de a x b
for (int i=0;i<n;i++)
	{
		for (int j=0;j<p;j++)
		{
			for (int k=0;k<m;k++)
			{
				mul[i][j]=A[i][k]*B[k][j]+mul[i][j];
			}
		}
	}

  //Affichage de Matrice b
      printf("\nLa Matrice B:");
    for(int i=0; i<n; i++)
    {
       printf("\n");
       for(int j=0; j<p; j++)
       {
           printf("%d",mul[i][j]);
           printf(" ");
       }
    }


//Exercice 08:
 int mat[100][100],n,m,k,vect[100];
  //lire les dimensions
    printf("Entrer Nbr des lignes : ");
    scanf("%d",&n);
    printf("Entrer Nbr des colonnes : ");
    scanf("%d",&m);
    k=n*m;
    //remplir la matrice et vecteur
    for(int i=1;i<=n;i++){
     for(int j=1;j<=m;j++){
        scanf("%d",&mat[i][j]);
        vect[(i-1)*m+j]=mat[i][j];
        }
    }
      printf("\nLa Matrice :");
     for(int i=1;i<=n;i++){
            printf("\n");
         for(int j=1;j<=m;j++){
            printf("%d",mat[i][j]);
            printf(" ");
        }
    }
    printf("\n");
    //affichage de valuer et indice apartir de b
    for(int i=1; i<=k;i++){
            printf("L'element %d se trouve a mat[%d][%d]\n",vect[i],i%m,i%m+1);
    }
*/

//Exercice 09:


    return 0;
}
