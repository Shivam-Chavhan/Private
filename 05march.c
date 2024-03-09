#include <stdio.h>
int main()
{
    int password, c = 0;

    do

    {
        if (c == 3)
        {
            printf("\nExced limit");
            break;
        }
        printf("\n enter your password");
        scanf("%d", &password);
        c++;

    } while (password != 8888 /* condition */);

    if (/* condition */ password == 8888)
    {
        /* code */ printf("loooged in successfull");
    }
}
