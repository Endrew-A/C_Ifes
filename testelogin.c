#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int login=0;
int lerArquivo();

void main(){
	int nivel;
	if(login!=1){
		nivel = lerArquivo();
		if(nivel==1){
			printf("Permissão de admin concedida");
			login=1;
		}else if(nivel==2){
			printf("Permissao de vendedor concedida");
			login=1;
		}else{
			printf("Acesso negado");
		}
	}
	printf("\n%d", nivel);
	
	
}

int lerArquivo() {
    FILE *arquivo;
    char linha[200];
    char *registro1, *registro2;
    int numeroLinha = 1;

    // Abre o arquivo para leitura
    arquivo = fopen("senhas.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura! Verifique se o arquivo existe.\n");
        return;
    }
    
    int tentativas=0;
    while(tentativas<3){
		
	    char usu[20];
		char senha[10];
		
		printf("Digite o usuario: ");
		fgets(usu,sizeof(usu),stdin);
		usu[strcspn(usu,"\n")] =0;
		printf("Digite a senha: ");
		fgets(senha,sizeof(senha),stdin);
		senha[strcspn(senha,"\n")]=0;

    	// Lê linha por linha do arquivo
    		//reinicia a leitura do arquivo, permitindo as tentativas
    		rewind(arquivo);
    	while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        	// Remove a quebra de linha
        	
        	linha[strcspn(linha, "\n")] = 0;

        	// Separa os registros usando strtok
        	registro1 = strtok(linha, ";");
        	registro2 = strtok(NULL, ";"); // continua de onde parou o ponteiro

        	if(strcmp(registro1,usu)==0 && strcmp(registro2,senha)==0){
        		printf("Login autenticado\n");
        	
    	    	int nivel = atoi(strtok(NULL,";"));
        		
	        	if(nivel==1){
	        		return 1;	
				}else{
					return 2;
				}
	        	
			}
    	}
    	printf("Dados incorretos\n");
		
    	printf("--------------------\n");
		tentativas++;
	}

    // Fecha o arquivo
    fclose(arquivo);
    return 0;
}
