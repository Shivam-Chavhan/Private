#include <stdio.h>
int main()
{

    int age,ans;

    printf("\n Enter your age");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Do you have viter ID? Press 1 for Yes, 2 for NO");
        scanf("%d", &ans);

        if (ans == 1)
        {

            printf("You can Vote");
        }
        else
        {
            printf("Get your voter I'd");
        }
    }
    else
    {
        printf("\n You are not Eligible");
    }
}