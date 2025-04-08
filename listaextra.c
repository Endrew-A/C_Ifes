#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void exe1(){
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		printf("%d * %d = %d\n",n,i,n*i);
	}	
}

void exe2(){
	int n;
	scanf("%d",&n);
	
	if(n%10==0){
		printf("o numero %d e divisivel por 10\n",n);
	}
	if(n%5==0){
		printf("o numero %d e divisivel por 5\n",n);
	}
	if(n%2==0){
		printf("o numero %d e divisivel por 2\n",n);
	}
	if(n%10!=0&&n%5!=0&&n%2!=0){
		printf("esse numero nao e divisivel por 10, 5 e 2");
	}
}

void exe3(){
	char nome[50], sexo;
	float peso,altura;
	int i,idade;
	
	for(i=0;i<2;i++){
		printf("Nome: ");
		scanf("%s",&nome);
		getchar();
		printf("Sexo: ");
		scanf("%c",&sexo);
		printf("Peso: ");
		scanf("%f",&peso);
		printf("Altura: ");
		scanf("%f",&altura);
		printf("Idade: ");
		scanf("%d",&idade);
		
		if(sexo == 'f' && idade<25 && peso/(altura*altura)>25){
			printf("%s: PERMITIDA\n",nome);
		}else if(sexo == 'f' && idade<25 && peso/(altura*altura)<25){
			printf("%s: NAO PERMITIDA\n",nome);
		}
	}
}

void exe4(){
	float a[3];
	int i;
	for(i=0;i<3;i++){
		scanf("%f",&a[i]);
	}
	if(a[0]==a[1]&&a[0]==a[2]){
		printf("Equilatero");
	}else if(a[0]==a[1]||a[0]==a[2]||a[1]==a[2]){
		printf("Isosceles");
	}else{
		printf("Escaleno");
	}
}

void exe5(){
	float alt_chico=1.5,alt_juca=1.35;
	int i,j,semestre;
	
	while(alt_chico > alt_juca){
		alt_chico +=0.03;
		alt_juca += 0.05;
		semestre++;
	}
	printf("Serao necessarios: %d semestres | Chico: %.2f e Juca: %.2f",semestre,alt_chico,alt_juca);
}

void exe6(){
	int a,b,x=0;
	
	while(x%5<3){
		scanf("%d",&a);
		scanf("%d",&b);
		if(a+b>20){
			x = a+b+8;
		}else{
			x = a+b-5;
		}
	}
	printf("Concluido");
}

void exe7(){
	int idade;
	scanf("%d",&idade);
	
	if(idade >=18){
		printf("Habilitacao concedida");
	}else{
		printf("Idade insuficiente");
	}
}

void exe8(){
	int random = (rand() % (50 - 1 +1)) + 1;
	int usu=0;
	while(usu != random){
		printf("\nAdivinhe o numero: ");
		scanf("%d",&usu);
		if(usu < random){
			printf("Seu numero e menor que o gerado!");
		}else if(usu > random){
			printf("Seu numero e maior do que o gerado");
		}else{
			printf("Acertou!");
		}
	}
}

void exe9(){
	int vlr,a,cem,cinquenta,vinte,dez,cinco,dois;
	scanf("%d",&vlr);
	cem = vlr/100;
	a= vlr%100;
	cinquenta = a/50;
	a= a%50;
	vinte = a/20;
	a = a%20;
	dez = a/10;
	a = a%10;
	cinco = a/5;
	a = a%5;
	dois = a/2;
	a = a%2;
	
	printf("%d / %d / %d / %d / %d / %d / sobra: %d",cem,cinquenta,vinte,dez,cinco,dois,a);
}

void exe11(){
	int soma,n;
	scanf("%d",&n);
	while(n>0){
		soma += n;
		n-=1; 
	}
	printf("%d", soma);
}

void exe12(){
	int h=0,m=0,i,j;
	
	for(i=0;i<24;i++){
		for(j=0;j<60;j++){
			printf("%02d:%02d\n",i,j);
		}
	}
}

void exe13(){
	int ano;
	scanf("%d",&ano);
	
	if(ano%4==0 && (ano %100!=0 || ano%400==0)){
		printf("Ano bissexto");
	}else{
		printf("nao e bi");
	}
}

void exe14(){
	char senha[20] = "abc123", usu[20];
	while(strcmp(usu,senha)!=0){
		scanf("%s",&usu);
		if(strcmp(usu,senha) != 0){
			printf("senha incorreta\n");
		}else{
			break;
		}
	}
	printf("Acesso concedido");
}


void main(){
	
	exe14();
}
