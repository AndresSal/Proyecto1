#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{

int M[100][3];
int i,j;
FILE *entrada;

char id[20];
char formula[20];
char intro[100];
char *token;
char s[2]="\n";
//lectura del archivo

entrada = fopen("chemicals.tsv","r");

if (entrada == NULL)
{
	printf("Archivo vacio\n");
	return 1;
}

printf("\nEl contenido del archivo es \n\n");
	
	while(feof(entrada)==0)
	{
		fgets(intro,30,entrada);
		puts(intro);
	}

	

	
	token = strtok(intro, s);
	
	while(token != NULL)
	{
		printf("%s\n",token);

		token = strtok(NULL,s);
	}	


fclose(entrada);

//

return 0;

}
