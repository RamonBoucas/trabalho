#include <stdio.h>



/*crio a struct do tipo Endereço*/

typedef struct _Endereco Endereco;

struct _Endereco{
	char logradouro[72];
    char bairro[72];
    char cidade[72];
    char uf[72];
    char sigla[2];
    char cep[8];
    char lixo[2];
};


int main(int argc , int **argv){


	FILE *f;
	Endereco e;

	/*variavel que retornará , a cada leitura a quantidade de bytes efetivamente lidos*/
	int qt;
	/*variavel que será incrementada a cada iteraçao do while, e mostrará quantos CEP's foram percorridos */
	int c;

	if(argc != 2){
		/*verifica se o usuario entrou com um argumento que é o CPF que ele busca */

		printf("uso correto [CEP chamado]",argv[0]);
		return 1;
	}

	c = 0;

	/* imprime o tamanho da estrutura */
	printf("tamanho da estrutura %d\n",sizeof(Endereco));

	/*abre o arquivo */	
	f = fopen("cep_ordenado.dat","r");

	if(f == NULL){
		fprintf(stderr,"nao conseguimos abrir o arquivo");
		fclose(f);
		return 1;
	}


	fseek(f,0,SEEK_END);
	int tBytes = ftell(f);
	printf("bytes");
	printf("%d",tBytes);
	int tRegistros = (tBytes/300);
	printf("registros");
	printf("%d",tRegistros);


	int inicio = 0;
	int final = tRegistros-1;
	int meio = ((inicio+final)/2);



	 

	char *cep = e.cep;
	printf("cep");
	printf("%s",cep);

	int cont = 0;

	while(inicio <= final) {

	meio = (inicio+final)/2;
	fseek(f,meio*300,SEEK_SET);
	qt = fread(&e,sizeof(Endereco),1,f);

	if(strncmp(argv[1],e.cep,8) == 0){

		fprintf(stderr,"eles sao iguais");
		printf("total :%d",cont);
		return 0;
	}

	if(strcmp(argv[1],e.cep,8) <  0){

		 final = meio -1;
	}

	if(strcmp(argv[1],e.cep,8) > 0){

		 inicio = meio +1;
	}

	cont++;

}



printf("infelizmente Não achamos");
printf("total :%d",cont);








 




	/* lê,para guardar no endereço de memoria correspodente a variavel e do tipo struct de endereço(endereço de pessoas)
	   uma quantidade de elementos correspondente ao tamanho(do endereço de pessoas),elementos com tamanho de 1 byte,
	   e o lugar de onde ocorre a leitura é o ponteiro de arquivo f
	 */

}



















