#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{

int M[100][3];
int i=0,j;
FILE *entrada;

char id[200]={0};
char formula[200]={0};
char *token;
//char s[2]="\t";
//lectura del archivo

entrada = fopen("chemicals.tsv","r");

if (entrada == NULL)
{
	printf("Archivo vacio\n");
	return 1;
}

printf("\nEl contenido del archivo es \n\n");
	
	while(fgets(id,200,entrada))
	{

		token = strtok(id,"\n");
		token = strtok(id,"\t");
		puts(id);

	}
	
	printf("\n Separar...\n");	

	while(fgets(formula,200,entrada))
	{
		token = strtok(formula,"\t");
		token = strtok(formula,"\n");
		puts(formula);
		 
	}
	
	printf("\n fin");
	
	
	



fclose(entrada);

//

return 0;

}
