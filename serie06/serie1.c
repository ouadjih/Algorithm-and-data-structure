#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int Factorielle(int N)
 {
 int i , fact = 1;
    for ( i =2; i <N; i ++)
    fact = fact * i ;
    return fact;
 }

int maximum(int a ,int b){
 if(a<b){
        return b ;
    }else{
        return a;
    }
    //return a<b?b:a;
}

bool deviser(int a ,int b){
    if (a%b == 0)
        return true;
        else
        return false;
}

int ABS(int a){
   return a<0?-a:a;
}

void isPalindrome(const char * mot){
    int L = strlen(mot);
    int i,j;
    for(i=0,j=L-1;i<j;i++,j--){
        if(mot[i]!=mot[j])
        {
            printf("Le mot n'est pas palindrom");
            break;
        }
    }
    if(i>=j)
    printf("Le mot est palindrom");
}

int isMultipleDeux(int a){
return a%2 == 0 ? 1:0;
}
int isMultipleTrois(int a){
return a%3 == 0?1:0;
}

 int main(){

    /* Exercice 01

    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("le maximum entre %d, %d, %d est %d ",x,y,z,maximum(maximum(x,y),z));

    */
    /*
    Exercice 02

    int tab[10]={1, 22, -32, 45, 0, 5, 66, -73, 21, 2},val;
    printf("Entrer le valeur ");
    scanf("%d",&val);
    for (int i = 0; i<10;i++){
        if(deviser(tab[i],val)){
            printf("tab[%d] = %d \n", i,tab[i]);
        }
    }
    */
    /*
    Exercice 3


    int tab[10]={1, 22, -32, 45, 0, 5, 66, -73, 21, 99},max=tab[0],sum;

    for (int i = 0; i<=9;i++){
        max = maximum(max,tab[i+1]);
        sum = sum + ABS(tab[i]);
        }
        printf("le maximum d'un tableau : %d ",max);
        printf("\nla somme des val absolue de tableau : %d ",sum);

    */
    /* Exercice 5: verifie si un mot est palindrome

     char mot[100];

    printf("Entrer le mot : ");
    scanf("%s", mot);

    isPalindrome(mot);
    */

    /*Exercice 6:

    */
    int x;
    printf("donner x : ");
    scanf("%d",&x);

    if(isMultipleDeux(x)) printf("%d est pair\n",x);
    if(isMultipleTrois(x)) printf("%d est multiple de 3\n",x);
    if(isMultipleDeux(x) && isMultipleTrois(x)) printf("%d est divisible par 6",x);
return 0;}
