#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Hi, welcome to my calculator! \n");
    printf("Choose a symbol to use: +, -, *, /, %% \n");

    char symbol;
    scanf(" %c", &symbol);  

    printf("Now choose a number\n");
    int x;
    scanf("%d", &x);

    printf("And a second one\n");
    int y;
    scanf("%d", &y);

    
    float result;

    if (symbol == '+')
    {
        printf("addition\n");
        result = x + y;  
    }
    else if (symbol == '-')
    {
        printf("substraction\n");
        result = x - y;  
    }
    else if (symbol == '*')
    {
        printf("multiplication\n");
        result = x * y;  
    }
    else if (symbol == '/')
    {
        if (y == 0)
        {
            printf("Error, devided by 0.\n");
            exit(1);
        }
        printf("division\n");
        result = (float)x / (float)y;  
    }
    else if (symbol == '%')
    {
        if (y == 0)
        {
            printf("Error, modulo by 0.\n");
            exit(1);
        }
        printf("modulo\n");
        result = x % y;  
    }
    else
    {
        printf("Symbol not recognized\n");
        exit(1);
    }

    
    if (symbol == '/')
        printf("%d %c %d = %.2f\n", x, symbol, y, result);  
    else
        printf("%d %c %d = %.0f\n", x, symbol, y, result);  

    return 0;
}
