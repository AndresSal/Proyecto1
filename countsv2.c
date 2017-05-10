#include <stdio.h>

int main ()
{
	char saludo[] = "cccCCCaa";
	counts(saludo);
	
}

void counts(char *cadena)
{
	int i = 0;
	int j = 0;
	int N = 0;
	char x = cadena[i];
	char tabla [sizeof(cadena)][2];
	
	
	printf("tamaño del arreglo: %d\n",sizeof(cadena));
		
	while (i != sizeof(cadena))
	{
		if(x != cadena[i+1])
		{
			tabla[j][0] = x;
			x = cadena[i+1];
			j++;	

		}
		i++;
		
	}

	i = 0;
	j = 0;
	x=cadena[i];

	for (i=0; i<sizeof(cadena);i++)
	{
		x = cadena[i];
		int a = i + 1;
 		int cont = 1;
		
		if(x != 'a')
		{

			if(x == cadena[a])
			{
				cont++;
			}

			else
			{
				tabla[j][1] = cont;
				j++; 				
			}
			
		}
		else
		{
			tabla[j][1]=0;
			j++;
		}
		
	}
	

	for (i=0;i<sizeof(cadena);i++)
	{
		x = tabla[i][0];
		if(x =='a')
		{
			tabla[i][1]='1';
		}
	}

	for (i=0; i<sizeof(cadena);i++)
	{
		N=N+tabla[i][1];
	}

	for (i = 0 ; i < sizeof(cadena); i++)
	{
		printf("\n");
		for (j=0; j < 2; j++)
		{
		printf("%c \t",tabla[i][j]);
		}
	}
	printf("\n N de la cadena es: %d",N);
}
