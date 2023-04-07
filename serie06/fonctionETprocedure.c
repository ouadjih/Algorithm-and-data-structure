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

int LongChain(const char * mot){
    int i=0;
    while(mot[i]!='\0'){
        i=i+1;
    }
    return i;
}

/*int isPrime(int n, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return isPrime(n, i - 1);
        }
    }
}
*/
int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int sum_first_n_primes(int n, int total)
{
    if (n==1)
    {
        return total;
    }
    else
    {
        if (is_prime(n))
        {
            return sum_first_n_primes(n-1, total+n);
        }
        else
        {
            return sum_first_n_primes(n-1, total);
        }
    }
}


void motMiroir(char *mot, int debut, int fin) {
    if (debut < fin) {
        char temp = mot[debut];
        mot[debut] = mot[fin];
        mot[fin] = temp;
        motMiroir(mot, debut + 1, fin - 1);
    }
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


    int x;
    printf("donner x : ");
    scanf("%d",&x);

    if(isMultipleDeux(x)) printf("%d est pair\n",x);
    if(isMultipleTrois(x)) printf("%d est multiple de 3\n",x);
    if(isMultipleDeux(x) && isMultipleTrois(x)) printf("%d est divisible par 6",x);
      */
    /*Exercice 7
    char chaine[100];
    printf("Entrer la chaine : ");
    //fgets(chaine,sizeof(chaine),stdin);
    scanf("%s", chaine);
    printf("%s",chaine);
    printf("%d",LongChain(chaine));
    */

    /*Exercice 8 recursivite
    int a = sum_first_n_primes(7,0);
    printf("%d",a);
*/

    /*Exercice 9 recursif motmiroire*/
        char mot[100];
        printf("Entrer la chaine : ");
        scanf("%s",mot);
        int longeur = LongChain(mot);

        motMiroir(mot,0,longeur-1);

        printf("%s",mot);


return 0;}
