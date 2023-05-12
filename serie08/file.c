/*#include<stdio.h>

int produit( int n){
int prod=1;
int chiffre;
while(n>0){
    chiffre=n%0;
    prod = prod*chiffre;
}
return prod;
}
int main(){

printf("%d",produit(2016));
return 0;
}
*/

#include<windows.h>

int main(void){
    MessageBoxW(
                NULL,
                L"MYFRIST MESSAGE",
                L"yyyy",
                MB_ICONEXCLAMATION );

return 99;}
