#include<stdio.h>

int main(){

    int a=10, b=2;
    char option;

    printf("\n Choose Your Optiion -\n + \n - \n * \n / \n Exist");

    scanf("%c",&option);

    switch (option)

    {/* constant-expression */

    case  '+': printf("\n Sum is %d",a+b);
        break;

       case '-': printf("\n Sub is %d",a-b);
        break;
    
       case '*': printf("\n Mul is %d",a*b);
        break;

               case '/': printf("\n Divide is %d",a/b);
        break;
    
    default: printf("\n Exit");
       
    }
}