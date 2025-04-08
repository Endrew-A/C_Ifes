#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exe1(){
	
	int n;
	scanf("%d",&n);
	if(n>0){
		if(n%2==0){
			printf("esse numero e par");
		}
		else{ printf("esse numero e impar");
		}
	}
	else if(n<0){
		printf("esse numero e negativo");
	}
	else{printf("esse numero e 0");
	}
}

void exe2(){
	float slr,finan;
	scanf("%f",&slr);
	scanf("%f",&finan);
	
	if(finan<=slr*5){
		printf("Financiamento concedido\n");
	}else{
		printf("Financiamento negado\n");
	}
	printf("Obrigado por usar nosso sistema");
}

void exe3(){
	
	float nota;
	scanf("%f",&nota);
	
	if(nota<3){
		printf("E");
	}else if(nota>=3 && nota<6){
		printf("D");
	}else if(nota>=6 && nota<8){
		printf("C");
	}else if(nota>=9){
		printf("A");
	}else{
		printf("B");
	}
}

void exe4(){
	char nome[50];
	scanf("%s",&nome);
	float slr;
	scanf("%f",&slr);
	
	float aumento;
	
	if(slr<=998){
		aumento = 10;
	}else if(slr>998&&slr<=1200){
		aumento = 6;
	}else if(slr>1200 && slr<=1500){
		aumento = 4;
	}else if(slr>1500 && slr <=1800){
		aumento = 2;
	}
	
	printf("%s seu aumento foi de: %.2f",nome,aumento);
	printf(" seu antigo salario era de: %.2f seu novo salario e de: %.2f",slr,slr*((aumento/100)+1));
}

void exe5(){
	int i,par=0,impar=0,totalpar,totalimpar;
	for(i=0;i<500;i++){
		int random = rand() %(1000 - 1 +1)+1;
		if(random%2==0){
			par++;
			totalpar += random;
		}else{
			impar++;
			totalimpar += random;
		}
		
	}
	printf("%d, %d, %d, %d", par,impar,totalpar,totalimpar);
}

void exe6(){
	int a,b=0;
	while(a!=0){
		scanf("%d",&a);
		if(a==0){
			return;
		}
		printf("%d / %d\n", a,b);
		b = a;
	}
}

void exe7(){
	float ava1[20],ava2[20],ava3[20],ava4[20],ava5[20];
	float media_turma;
	int aprov=60,i,j,reprovados=0,aprovados=0;
	
	for(j=0;j<3;j++){
			float media=0;
			scanf("%f",&ava1[j]);
			scanf("%f",&ava2[j]);
			scanf("%f",&ava3[j]);
			scanf("%f",&ava4[j]);
			scanf("%f",&ava5[j]);
			media = (ava1[j]+ava2[j]+ava3[j]+ava4[j]+ava5[j])/5;
			if(media>=aprov){
				aprovados++;
			}else{
				reprovados++;
			}
			media_turma += media;
			system("cls");
	}
	printf("Aprovados: %d / Reprovados: %d\nMedia da turma: %.2f", aprovados,reprovados,media_turma/(aprovados+reprovados));
}

void exe8(){
	int i;
	float a,b,c;
	
	scanf("%d",&i);
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	switch(i){
		case 1:
			if(a<b&&a<c){
				if(b<c){
					printf("%f / %f / %f", a,b,c);
				}else{
					printf("%f / %f / %f", a,c,b);
				}
			}
			else if(b<a&&b<c){
				if(a<c){
					printf("%f / %f / %f", b,a,c);
				}else{
					printf("%f /%f /%f", b,c,a);
				}
			}else{
				if(b<a){
				printf("%f / %f /%f", c,b,a);
				}else{
					printf("%f / %f /%f", c,a,b);
				}
			}
			break;
		case 2:
			if(a>b&&a>c){
				if(b>c){
					printf("%f / %f / %f", a,b,c);
					}
					else{
						printf("%f / %f / %f",a,c,b);
					}
			}
			else if(b>c){
				if(c>a){
				printf("%f / %f / %f",b,c,a);}
				else{
					printf("%f / %f / %f",b,a,c);
				}
			}
			else{
				if(b>a){
					printf("%f / %f / %f",c,b,a);
				}else{
					printf("%f / %f / %f",c,a,b);
				}
			}
			break;
			
		case 3:
			if(a>b&&a>c){
				printf("%f / %f / %f",b,a,c);
			}
			else if(b>c){
				printf("%f / %f / %f",c,b,a);
			}else{
				printf("%f / %f / %f",b,c,a);
			}
			break;
		default:
			printf("Valor de i invalido");
	}
}

void exe9(){
	int i,j,perfeito=0;
	for(i=1;perfeito<4;i++){
		int soma=0;
		for(j=i-1;j>0;j--){
			if(i%j==0){
				soma += j;
			}
		}
		if(soma == i){
			perfeito++;
			printf("%d\n", i);
		}
	}
}

void exe10(){
	
	int m=1;
	while(m!=0){
		scanf("%d",&m);
		if(m<0){
			printf("Digite o valor novamente\n");
			
		}
		else if(m%2==0){
			int i,divso=0;
			for(i=1;i<=m;i++){
				if(m%i==0){
					divso++;
				}
			}
			printf("Os divisores sao: %d\n",divso);
		}
		else if(m%2==1 && m<12){
			int i,fatorial=1;
			for(i=m;i>0;i--){
				fatorial *= i;
			}
			printf("A fatorial e: %d \n",fatorial);
		}
		else if(m%2==1 && m>=12){
			int i,soma=0;
			for(i=1;i<=m;i++){
				soma += i;
			}
			printf("As somas sao: %d\n",soma);
		}
		
	}
}
	
void exe11(){
	
	int i,j;
	printf("| Numero	| Quadrado	| Cubo	| Fatorial	| Divisores	| Primo	|\n");
	for(i=1;i<=100;i++){
		printf("|%d		|%d		|%d	|", i,i*i,i*i*i);
		int fatorial =1;
		for(j=i;j>0;j--){
			fatorial *= j;
		}
		printf("%d		|",fatorial);
		int div=0;
		for(j=1;j<=i;j++){
			if(i%j == 0){
				div++;
			}
		}
		printf("%d		|",div);
		int contagem=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				contagem++;
			}
		}
		if(contagem <=2){
			printf("%c	|\n",'V');
			//printf("\n");
		}else{
			printf("%c	|\n",'F');
		}
	}
}


void exe12(){
	int a[2] = {1,1},i;
	while(a[0]!=0 && a[1]!=0){
	
		for(i=0;i<2;i++){
			scanf("%d",&a[i]);
		}
		
		system("cls");
		
		if(a[0]==0 && a[1] == 0){
			break;
		}
		
		int max=0,min=0;
		int j;
		for(j=1;j<=a[0];j++){
			if(a[0]%j==0 && a[1]%j==0){
				max = j;
			}
		}
		
		printf("MDC: %d | MMC: %d\n",max,(a[0]*a[1])/max);
			
		}
	}

void exe13(){
	char nome [50][30];
	float altura[50], peso[50];
	int i=0;
	while(nome[49][0]!= "" || altura [49] != 0 || peso[49]!=0){
		printf("Digite seu nome: ");
		//gets(nome[i]);
		scanf("%s",&nome[i]);
		printf("\nDigite sua altura: ");
		scanf("%f",&altura[i]);
		printf("\nDigite seu peso: ");
		scanf("%f",&peso[i]);
		
		float imc = peso[i]/(altura[i]*altura[i]);
		char condicao[15];
		if(imc <18.5){
			strcpy(condicao,"MAGRO");
		}else if(imc >=18.5 && imc <25){
			strcpy(condicao,"GOTSPOSA");
		}else if(imc>=25 && imc <30){
			strcpy(condicao,"GORDO");
		}else{
			strcpy(condicao,"OBESOOOO");
		}
		
		printf("%s seu imc e igual a: %.2f	| Voce esta %s\n", nome[i],peso[i]/(imc), condicao);
		getchar();
		i++;
	}
	
}

void main(){
	
	exe9();
}



