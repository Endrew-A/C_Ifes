#include <stdio.h>

//Lista extra - Vetor

void exe1(){
	int num[10],pos=0,neg=0;
	int i=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
		if(num[i]>0){
			pos++;
		}else if(num[i]<0){
			neg++;
		}
	}
	printf("%d / %d", pos,neg);
}

void exe2(){
	char *meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio",
	"Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	int i=0;
	float mediam[12], mediaa=0;
	
	for(i=0;i<12;i++){
		printf("Média de %s: ", meses[i]);
		scanf("%f",&mediam[i]);
		mediaa += mediam[i];
	}
	for(i=0;i<12;i++){
		if(!(mediam[i]<=mediaa/12)){
			printf("%s: %.2f /", meses[i],mediam[i]);
		}
	}
}

void exe3(){
	int n[5],i,maior=0,vmaior;
	
	for(i=0;i<5;i++){
		scanf("%d",&n[i]);
		if(n[i]>maior){
			maior = n[i];
			vmaior =i;
		}
	}
	
	printf("O maior numero eh: %d na posicao %d", maior,vmaior);
}

void exe4(){
	int n[8],i,j,temp,op;
	
	for(i=0;i<8;i++){
		scanf("%d",&n[i]);
	}
	printf("Escolha 1 ou 2: ");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			for(i=0;i<8;i++){
			for(j=0;j<8;j++){
				if(n[j]>n[i]){
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
				}
			}
		}
		for(i=0;i<8;i++){
			printf("%d / ",n[i]);
		}
			break;
		case 2:
			for(i=0;i<8;i++){
				for(j=0;j<8;j++){
					if(n[j]<n[i]){
					temp = n[i];
					n[i] = n[j];
					n[j] = temp;
				}
			}
		}
		for(i=0;i<8;i++){
			printf("%d / ",n[i]);
		}
			break;
	}
}

void exe5(){
	int n[10], nusu;
	int i;
	
	for(i=0;i<10;i++){
		scanf("%d",&n[i]);
	}
	scanf("%d",&nusu);
	
	for(i=0;i<10;i++){
		if(nusu == n[i]){
			printf("O número %d é igual ao encontrado na posição %d", nusu,i);
		}
	}
	
}

void exe6(){
	char produto [12][20];
	float vlr[12];
	int i;
	
	for(i=0;i<12;i++){
		printf("Nome: ");
		scanf("%[^\n]s", produto[i]);
		getchar();
		printf("Valor: ");
		scanf("%f",&vlr[i]);
		getchar();
	}
	
	for(i=0;i<12;i++){
		if(vlr[i]>100){
			vlr[i] *= 0.9;
		}else{
			vlr[i] *= 0.95;
		}
	}
	
	for(i=0;i<4;i++){
		printf("\nNome: %s",produto[i]);
		printf(" / Valor: %f",vlr[i]);
	}
}

void exe7(){
	int	n[5],i,op,soma=0;
	
	for(i=0;i<5;i++){
		scanf("%d",&n[i]);
		getchar();
	}
	
	printf("Escolha uma op: ");
	scanf("%d",&op);
	
	switch(op){
		
		case 1:
			for(i=0;i<5;i++){
				if(n[i]>0){
					printf("%d / ",n[i]);
				}
			}
			break;
		case 2:
			for(i=0;i<5;i++){
				if(n[i]<0){
					printf("%d / ",n[i]);
				}
			}
			break;
		case 3:
			for(i=0;i<5;i++){
				soma+=n[i];
			}			
			printf("%d",soma);

			break;
	}
	
}

void main(){
	exe7();
	
	
	
}
