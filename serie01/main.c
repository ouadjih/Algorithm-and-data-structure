#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Exercice 1
/*
    int A,B,somme,nbr,carre;
    printf("Donner A et B :\n");
    scanf("%d",&A);
    scanf("%d",&B);
    somme = A+B;
    printf("la somme est : %d",somme);

//Exercice 4
    printf("Donner un nombre :\n");
    scanf("%d",&nbr);
    carre=nbr*nbr;
    printf("le carre de %d est : %d ",nbr,carre);


    //Exercice 7
    int nbr1,nbr2,temp;

    scanf("%d",&nbr1);
    scanf("%d",&nbr2);
    printf("Avant la permutation : \n");
    printf(" nbr1 : %d \n",nbr1);
    printf(" nbr2 : %d \n",nbr2);


    temp=nbr2;
    nbr2=nbr1;
    nbr1=temp;

    printf("Apres la permutation : \n");
    printf(" nbr1 : %d \n",nbr1);
    printf(" nbr2 : %d ",nbr2);


    //Exercice 8 permutation circulaire
    int a, b, c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("Avant permutation : \n");
    printf(" a : %d \n b : %d \n c : %d \n",a,b,c);
    // permute a avec b
    a=a+b;
    b=a-b;
    a=a-b;
    //permute b et c
    b=b+c;
    c=b-c;
    b=b-c;
    printf("Avant permutation : \n");
    printf(" a : %d \n b : %d \n c : %d",a,b,c);

    //Exercice 9 polynome

     float a,b,c,delta,x1,x2;
     scanf("%f",&a);
     scanf("%f",&b);
     scanf("%f",&c);

     delta = (b*b)-(4*a*c);
     printf("delta : %f \n",delta);
     if(delta > 0){
        x1 = (-b-sqrtf(delta)) / (2*a);
        x2 = (-b+sqrtf(delta)) / (2*a);
        printf("x1 = %f  x2 = %f",x1,x2);
     }else{
         if(delta == 0){
            x1 = -b / (2*a);
            x2 = x1;
            printf("Solution double� x1 = x2 = %f ",x1);
         }else{
            printf("delta negative pas de solution dans |R");
         }
     }

     //Exercice 10 val absolue

     float nbr ;
     scanf("%f",&nbr);

     if( nbr < 0 ){
        nbr = -nbr;
     }
     return nbr;

    //return (nbr<0)?-nbr:nbr;


    //Exercice 11 min de deux nbr

    int a ,b;
    scanf("%d",&a);
    scanf("%d",&b);

    if ( a < b ) return a;
            else return b;
    //return (a<b)?a:b;


    //Exercice 12 min trois nbr
    //methode-1
        int a, b, c;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);

        if(a<b) {
            if(a<c){
                return a;
            }else{
                return c;
            }
        }
        else{
            if(b<c){
                return b;
            }else{
                return c;
            }
        }

    //methode-2
    //return (a < b && a < c)? a : ((b < c)? b : c);

    //methode-3
    /*int num1,num2,num3;
	printf("Enter three numbers:");
	scanf("%d %d %d"&num1,&num2,&num3);
	if(num1 < num2 && num1 < num3)
	{
		printf("%d is smallest",num1);
	}
	else if(num2 < num3)
	{
		printf("%d is smallest",num2);
	}
	else
	{
		printf("%d is smallest",num3);
	}	*/
    return 0;
    }
