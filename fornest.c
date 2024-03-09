#include <stdio.h>
// int main()
// {
//     for(int i=1;i<=4;i++) // row i=1
//     {
//         for( int j=1;j<=4;j++){ //coloumn 
//         printf(" Pizza ");

//         }
//         printf("\n");

//     }

// }
int main()
{
    for(int i=1;i<=4;i++) // row i=1
    {
        for( int j=1;j<=i;j++){ //coloumn 
        printf(" Pizza ");

        }
        printf("\n");

    }

}