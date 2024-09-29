  #include <stdlib.h>
  #include <stdio.h>



int main()
{
    printf("Bonjour \n");
    printf("Choisissez une operation: +, -, *, /, %% \n");

    char symbol;
    scanf(" %c", &symbol);  

    printf("Choisissez un nombre\n");
    int x;
    scanf("%d", &x);

    printf("Choisissez un deuxieme nombre\n");
    int y;
    scanf("%d", &y);

    int t;  

    if (symbol == '+')
    {
        printf("addition\n");
        t = x + y;  
    }
    else if (symbol == '-')
    {
        printf("soustraction\n");
        t = x - y;
    }
    else if (symbol == '*')
    {
        printf("multiplication\n");
        t = x * y;
    }
    else if (symbol == '/')
    {
        if (y == 0)
        {
            printf("Erreur: division par zero\n");
            exit(1);
        }
        printf("division\n");
        t = x / y;
    }
    else if (symbol == '%')
    {
        if (y == 0)
        {
            printf("Erreur: modulo par zero\n");
            exit(1);
        }
        printf("modulo\n");
        t = x % y;
    }
    else
    {
        printf("L'operateur n'est pas reconnu\n");
        exit(1);
    }

    printf("%d %c %d = %d\n", x, symbol, y, t);

    return 0;
}




