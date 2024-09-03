#include<stdio.h>
int main()
{
    float n,m,o;
    char c;

    printf("Enter first number= ");
    scanf("%f",&n);
    printf("Enter second number= ");
    scanf("%f",&m);
    printf("Enter '+' or '-' or '*' or ' or '/ =");
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
        o=n+m;
        printf("%.2f + %.2f = %.2f",n,m,o);
        break;
    case '-':
        o=n-m;
        printf("%.2f - %.2f = %.2f",n,m,o);
        break;  
    case '*':
        o=n*m;
        printf("%.2f * %.2f = %.2f",n,m,o);
        break;
    case '/':
        if(m==0)
        {
            printf("Canont divided by Zero");
        } 
        else
        {
            o=n/m;
            printf("%.2f / %.2f = %.2f",n,m,o);
        }
        break; 
    default:
        printf("Enter '+' or '-' or '*' or ' or '/' ");
        break;
    }
    
    return 0;
}