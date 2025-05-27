#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

void sim1(){
	
	int matriz[7][9], soma=0,x;
	int i,j,posx,posy,flag=0;
	srand(time(NULL));
	
	for(i=0;i<7;i++){
		for(j=0;j<9;j++){
			matriz[i][j] = rand() %30;
		}
	}
	
	printf("Digite um valor: ");
	scanf("%d",&x);getchar();
	
	for(i=0;i<7;i++){
		for(j=0;j<9;j++){
			soma+=matriz[i][j];
			if(soma>x && flag==0){
				posx=i;posy=j;
				flag=1;
				printf("linha: %d / coluna: %d",posx,posy);
			}
		}
	}
	
}

void sim2(){
	
	int vetor[6], vetor2[5],i;
	srand(time(NULL));
	
	for(i=0;i<6;i++){
		vetor[i] = rand() %10;
	}
	
	for(i=0;i<5;i++){
		vetor2[i] = vetor[i] + vetor[i+1];
	}
	
	for(i=0;i<6;i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ", vetor2[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		if(vetor2[i]%2==1){
			printf("%d ", i);
		}
	}
}

void sim3(){
	
	char frase [20];
	int i, qtdc=0,qtdf=0,qtdr=0;
	
	printf("Digite uma frase: ");
	scanf("%[^\n]s",frase);
	
	char nvfrase[20];
	for(i=0;frase[i]!='\0';i++){
		nvfrase[i] = tolower(frase[i]);
	}
	
	for(i=0;i<strlen(nvfrase);i++){
		if(strchr("c",nvfrase[i])){
			qtdc++;
		}else if(strchr("f",nvfrase[i])){
			qtdf++;
		}else if(strchr("r",nvfrase[i])){
			qtdr++;
		}
	}
	printf("%d / %d / %d",qtdc,qtdf,qtdr);
	
}

void sim4(){
	
	char historico[10][40];
	char digitado [40];
	int i,vogais=0,cont=0,j;
	
	do{
		vogais=0;
		printf("Digite uma palavra: ");
		scanf("%[^\n]s",digitado);getchar();
		for(i=0;i<strlen(digitado);i++){
			if(strchr("aeiou",digitado[i])){
				vogais++;
			}
			historico[cont][i]=digitado[i];
		}
		printf("%d\n",vogais);
		for(i=0;i<cont;i++){
			if(strcmp(historico[i],digitado)==0){
				return;
			}
		}
		cont++;
	}while(cont<10);
	
}

void main(){
	sim4();
	
	
}
