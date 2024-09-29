  #include <stdlib.h>
  #include <stdio.h>





int main()
{
	printf("Bonjour \n");
	printf("Choissisez une operation: +, -, *, /, %% \n");

	char symbol;
	scanf("%c", &symbol);

	printf(" Choissisez un nombre\n");
	int x;

        scanf("%d", &x);

	printf("Choissisez un deuxieme nombre\n");
	int y;

        scanf("%d", &y);

	if(symbol == '+')
	{

		printf("addition\n");

	}

	else if(symbol == '-' )
	{

		printf("soustraction\n");

	}

	else if(symbol == '*' )
	{

		printf("multiplication\n");

	}

	else if(symbol == '/' )
	{

		printf("division\n");

	}

	else if(symbol == '%' )
	{

		printf("modulo\n");

	}

	else
	{

        	printf("L'operateur n'est pas reconnu\n");
	}

	exit (0);

}
