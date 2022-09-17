#include <stdio.h>
int main()
{
    float a, b;
    char d;
    printf("Enter the operation(+ - * / ):");
    scanf("%c", &d);
    printf("Enter a");
    scanf("%f", &a);
    printf("Enter b");
    scanf("%f", &b);

    switch (d)
    {
    case '+':
    {
        printf("%f", a + b);
        break;
    }
    case '-':

    {
        printf("%f", a - b);
        break;
    }
    case '*':

    {
        printf("%f", a * b);
        break;
    }
    case '/':

    {

        printf("%f", a / b);
        break;
    }

    case '%':

    {

        printf("%f", (int)a % (int)b);
        break;
    }

    default:

        printf("It is invalid");
    }

    return 0;
}