#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercice 3
    /*int N,S=0;
    printf("donner N :\n");
    scanf("%d",&N);

    for(int i=1; i<=N; i++){
        S+=i;
    }
    printf("La somme est : %d",S);

    //Exercice 04
    int nbr,a,P=1;
    printf("Donner le nombre puis la puissance : \n");
    scanf("%d %d",&nbr,&a);
    //M-1
    while(a>0){
        P *=nbr;
        a=a-1;
    }
    //M-2

    for(int i=0; i < a; i++){
            P *= nbr;
        }

    printf("la puissance est : %d",P);



    //Exercice 5  reste de division

    int a,b,rest;
    printf("donner a et b :\n");
    scanf("%d %d",&a,&b);
    //rest = a%b;
    rest=a;
    while(rest >= b){
        rest=rest-b;
    };
    printf("Le reste de division est : %d",rest);


    //Exercice 6 divisible par deux ou pas !

    int nbr,M;
    printf("Donner le nombre :\n");
    scanf("%d",&nbr);


    //m-1
    M=nbr;
    while(M >= 2){
        M=M-2;
    }
    if(M==0){
        printf("le nombre %d est divisible par 2",nbr);
    }else{
        printf("le nombre %d n'est pas divisible par 2",nbr);
    }

    //m-2
    if(nbr%2){
        printf("le nombre %d n'est pas divisible par 2",nbr);
    }else{
        printf("le nombre %d est divisible par 2",nbr);
    }

    //Exercice 07: min d'une suite entre

    int nbr,min=0,N;
    printf("donner nombre d'element de la suite :\n");
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        printf("%d  element: ",i+1);
        scanf("%d",&nbr);
        if(nbr<min){
            min=nbr;
        }
    }
    printf("le minimum d'elements est : %d",min);


    //Exercice 08: un nombre premier
        int n,m=0,flag=0;

        printf("Entrer le nombre a verifie s'il est premier: ");
        scanf("%d",&n);

        m=n/2;

        for(int i=2; i<=m; i++)
        {
            if(n%i==0)
            {
                printf("Le nombre n'est pas premier");
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("Le nombre est premier");


    //Exercice 09 PGCD de deux nombre
    #include<math.h>
        int A,B,mod;
        printf("Donner A et B :\n");
        scanf("%d %d",&A,&B);

        mod=A%B;

        while(mod != 0){
            mod=B;
            B=abs(A-B);
            A=mod;
            mod=A%B;
        }
        printf("Le pgcd = %d",B);



        //Exercice 10: Evaluer une serie
        */
#include<math.h>
        int n,f;
        float s=1;

        printf("Donner n:\n");
        scanf("%d",&n);
        for(int i=1; i<=n;i++){
            //calculer factorial de r = n!
            f=1;
            for(int j=1;j<=i; j++){
                    f=f*j;
            }
            //la somme
            s=s + (pow(-1,i)/(2*i+1)*f);
        }
         printf("le resultat final de la somme est : %f",s);



 //Exercice 11 : permuter un nombre a quatre chiffre  premier avec le dernier, le deuxieme avec le troisieme
/*
        int nbr,a,b,c,d,tmp;


        do{
            printf("donner un nombre a quatre chiffre :\n");
            scanf("%d",&nbr);
          }while(nbr<1000);
              a= nbr/1000;
              b= nbr%1000/100;
              c= nbr%1000%100/10;
              d= nbr%1000%100%10;

              tmp=a;
              a=d;
              d=tmp;
              tmp=b;
              b=c;
              c=tmp;
              printf("%d%d%d%d",a,b,c,d);

*/
        return 0;
}
