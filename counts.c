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
	int cont = 1;
	char x = cadena[i];
	char tabla [sizeof(cadena)][1];
	
	
	printf("tamaño del arreglo: %d\n",sizeof(cadena));
	
	while (i != sizeof(cadena))
	{
		if(x != cadena[i+1])
		{
			tabla[j][0] = x;
			x = cadena[i+1];
			j++;	

		}

		/*int a = 0;
		
		if(x == 'a')
		{
			tabla[j][1]=1;
			j++;
		}

		else
		{
			a = i + 1;
			
			if(x == cadena[a])
			{
				cont++;
			}
	
			else
			{
				tabla[j][1] = cont;
				x = cadena[a];
				cont = 1;
				j++;
			}
		}*/

		i++;
		
	}

	i = 0;
	j = 0;
	x=cadena[i];

	while (i != sizeof(cadena))
	{
		int a = 0;
 
		if(x == 'a')
		{
			tabla[j][1]= 1;
			j++;
		}

		else
		{
			a = i + 1;
			
			if(x == cadena[a])
			{
				cont++;
			}

			else
			{
				tabla[j][1] = cont;
				x = cadena[a];
				cont = 1;
				j++; 				
			}
			
		}

		i++;		
	}


	for (i = 0 ; i < sizeof(cadena); i++)
	{
		printf("\n %c %d",tabla[i][0],tabla[i][1]);
	}

}
