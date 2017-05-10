#include <stdio.h>

int main(int argc, char** argv)
{

int M[100][3];
int i,j;
FILE *entrada;

char id[100];
char formula[100];

//lectura del archivo

entrada = fopen("chemicals.tsv","r");

if (entrada == NULL)
{
	return 1;
}

printf("\nEl contenido del archivo es \n\n");
while(feof(entrada) == 0)
{
	fgets(formula,100,entrada);
	printf("%s",formula);
}
fclose(entrada);

//

return 0;

}
