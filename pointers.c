#include<stdio.h>


int main(){
    // *a is pointer variable its suppose to take adress of another variable as value
    int *a,b=5;
    printf("adress of a = %d \nadress of b = %d\n",&a,&b);
    // affecting the adress of b variable in the pointer variable (a).
    a=&b;
    // if we check the value we will find that it has the adress of b
    printf("a = %d\n",a);

    // the value of pointer a now will be the same  value as b variable
    printf("*a = %d b = %d",*a,b);

}
