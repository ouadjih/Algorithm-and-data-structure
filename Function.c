#include<stdio.h>


int Somme(int a, int b);

int main()
{
    int nb1,nb2,s;

    printf("Entrer la valeur de a et b \n");
    scanf("%d %d",&nb1,&nb2);

    s=Somme(nb1,nb2);

    printf("la somme de %d + %d est : %d",nb1,nb2,s);

    return 0;
}

int Somme(int a,int b)
{
    return a+b;
}
