#include <stdio.h>

float Discount(float dis, float price)
{
    // printf("%f   %f", dis,price);
    return price - (price * (dis / 100));
}
float Tax(float tax, float price)
{
    return price + (price * (tax / 100));
}
int menu()
{
    float p;
    int op;
    printf("\n Enter the Price of Product");
    scanf("%f", &p);
    printf("\n Enter your choice 1.Discount Calc 2.Tax Calc");
    scanf("%d", &op);
    switch (op)
    {
        float d;
    case 1:
        printf("\n Enter discount %");
        scanf("%f", &d);
        printf("The price after Discount is: %f", Discount(d, p));
        break;
    case 2:
        printf("\n Enter Tax %");
        scanf("%f", &d);
        printf("The price after tax is: %f", Tax(d, p));
        break;
    default:
        printf("\nInvalid option ");
    }
}
int main()
{
    menu();
}