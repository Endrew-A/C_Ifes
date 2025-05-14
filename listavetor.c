#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

void exe8(){
	char aluno [3] [20];
	float nota [3] [3], media=0;
	int i,j;
	
	for(i=0;i<3;i++){
		printf("Nome: ");
		scanf("%s[^\n]s",aluno[i]);
		getchar();
		for(j=0;j<3;j++){
			scanf("%f",&nota[i][j]);
			getchar();
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			media+=nota[i][j];
		}
		if(media/3>=6){
			printf("%s :Aprovado",aluno[i]);
		}else if(media/3<4){
			printf("%s :Reprovado",aluno[i]);
		}else{
			printf("%s :Recuperação",aluno[i]);
		}
		media=0;
	}
}

void exe9(){
	float t1=0,t2=0,t3=0,t0=0;
	int voto;
	
	while(voto>=0){
		scanf("%d",&voto);
		getchar();
		switch(voto){
			
			case 1:
				t1++;
				break;
			case 2:
				t2++;
				break;
			case 3:
				t3++;
				break;
			case 0:
				t0++;
				break;
		}	
	}
	printf("1: %.0f / 2: %.0f / 3: %.0f / 0: %.2f", t1,t2,t3,(t0/(t1+t2+t3+t0))*100);	
}

void exe10(){
	int n[5],op,i;
	float media=0;
	
	for(i=0;i<5;i++){
		scanf("%d",&n[i]);
		getchar();
	}
	printf("1. Mostrar o vetor na ordem original \n2. Mostrar o vetor na ordem inversa \n3. Calcular a média dos valores pares \n4. Calcular a média dos valores ímpares \n5. Sair do programa\n");
	scanf("%d",&op);
	getchar();
	switch(op){
		case 1:
			for(i=0;i<5;i++){
				printf("%d\n",n[i]);
			}
			break;
		case 2:
			for(i=5;i>0;i--){
				printf("%d\n",n[i]);
			}
			break;
		case 3:
			for(i=0;i<5;i++){
				if(n[i]%2==0){
				media += n[i];}
			}
			printf("%.2f",media/5);
			break;
		case 4:
			for(i=0;i<5;i++){
				if(n[i]%2==1){
				media += n[i];}
			}
			printf("%.2f",media/5);
			break;
		case 5:
			break;
	}
}

void exe11(){
	int a[5],i;
	
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		getchar();
	}
	
	for(i=0;i<5;i++){
		if(a[i] == 10){
			printf("Posicao: %d\n",i);
		}
	}
}

void exe12(){
	int a[10],i,n025=0,n2650=0,n5175=0,n76100=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		getchar();
		if(a[i]<0 || a[i]>100){
			printf("Digite apenas valores entre 0 e 100.\n");
			i=i-1;
		}else if(a[i]>=0 && a[i]<=25){
			n025++;
		}else if(a[i]>25 && a[i]<=50){
			n2650++;
		}else if(a[i]>50 && a[i]<=75){
			n5175++;
		}else{
			n76100++;
		}
	}
	
	printf("/");
	for(i=0;i<10;i++){
		printf("%d /",a[i]);
	}
	
	printf("\n%d / %d / %d / %d",n025,n2650,n5175,n76100);
}

void exe13(){
	int n[3][5],i,j;
	//srand(time(NULL));
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			scanf("%d",&n[i][j]);
			getchar();
		}
	}
	/*for(i=0;i<5;i++){
		a[3][i] =rand() %10;
	}*/
	
	//multiplicar a primeira da primeira matriz pelo último da segunda matriz
	for(i=0;i<5;i++){
		n[2][i] = n[0][i] * n[1][4-i];
	}
	
	for(i=0;i<5;i++){
		printf("%d\n",n[2][i]);
	}
	
}

void main(){
	exe13();
	
	
	
}
