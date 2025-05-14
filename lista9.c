#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exe1(){
	int n[5][6],i,j,mediap=0,contp=0;
	srand(time(NULL));
	
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			n[i][j] = rand() %10;
			if(n[i][j]%2==0){
				mediap+=n[i][j];
				contp++;
			}
		}
	}
	
	mediap = mediap/contp;
	
	printf("%d",mediap);
	
}
void exe2(){
	int n[7][4], i,j,menor=21,posl,posc;
	srand(time(NULL));
	
	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			n[i][j]= rand() %20;
			if(n[i][j]<menor){
				menor=n[i][j];
				posl=i;
				posc=j;
			}
		}
	}
	
	printf("O menor numero e: %d na linha %d e coluna %d",menor,posl,posc);
	
}

void exe2p1(){
	int n[7][4], i,j,x,y,menor=41,posl,posc,f;
	srand(time(NULL));
	
	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			do{
				f=0;
				n[i][j]= rand() %100;
				for(x=0;x<=i;x++){
					for(y=0;y<=j;y++){
						if(!(x==i && y==j) && n[i][j] == n[x][y]){
							f=1;
						}
					}
				}
			}while(f==1);
			
			if(n[i][j]<menor){
				menor=n[i][j];
				posl=i;
				posc=j;
			}
		}
	}
	
	printf("O menor numero e: %d na linha %d e coluna %d",menor,posl,posc);
	
}

void exe2p2(){
	int n[7][4], i,j,menor=21,posl,posc;
	srand(time(NULL));
	
	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			n[i][j]= rand() %20;
			if(n[i][j]<menor){
				menor=n[i][j];
				posl=i;
				posc=j;
			}
		}
	}
	
	for(i=0;i<7;i++){
		for(j=0;j<4;j++){
			if(n[i][j] == menor){
				printf("O menor numero e: %d na linha %d e coluna %d\n",menor,i,j);
			}
		}
	}
}

void exe3(){
	char clientes[4][4][20];
	int i,j,posl;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%[^\n]s",clientes[i][j]);
			getchar();
		}
	}
	printf("Informe a posicao da linha: ");
	scanf("%d",&posl);
	getchar();
	for(j=0;j<4;j++){
		printf("%s / ",clientes[posl][j]);
	}
}

void exe4(){
	int publico[3][6],i,j,ptotal=0,pmaior=0,ptotalnp,posl=0;
	
	for(i=0;i<3;i++){
		ptotal=0;
		for(j=0;j<6;j++){
			scanf("%d",&publico[i][j]);
			getchar();
			if(j<=3){
				ptotal+=publico[i][j];
			}
		}
		if(ptotal>pmaior){
			pmaior=ptotal;
			posl=i;
		}
	}
	//a
	printf("O maior numero de espectadores foi no jogo: %d\n",posl+1);
	
	//b
	for(i=0;i<3;i++){
		ptotal=0;
		for(j=0;j<4;j++){
			ptotal+=publico[i][j];
		}
		if(((publico[i][4])/(ptotal))<0.3f){
			printf("O jogo %d, teve porcentagem de policiais menor que 30\n",i+1);
		}
	}
	//c
	for(i=0;i<3;i++){
		if(publico[i][2] == 0){
			printf("O jogo %d nao teve crianças\n",i+1);
		}
	}
	//d
	ptotal=0;
	for(i=0;i<3;i++){
		for(j=2;j<6;j++){
			ptotal+= publico[i][j];
		}
	}
	printf("O total de publico nao pagante foi: %d", ptotal);
}

void exe5(){
	char nome [20];
	int i,tsoma=0,soma=0;
	
		do{
		//scanf("%s", nome);
		fgets(nome, sizeof(nome), stdin);
		//fflush(stdin);
		
		for(i=0;i<strlen(nome);i++){
			if(strchr("aku",nome[i])){
				soma+=0;
			}else if(strchr("blv",nome[i])){
				soma+=1;
			}else if(strchr("cmw",nome[i])){
				soma+=2;
			}
			else if(strchr("dnx",nome[i])){
				soma+=3;
			}else if(strchr("eoy",nome[i])){
				soma+=4;
			}else if(strchr("fpz",nome[i])){
				soma+=5;
			}else if(strchr("gq",nome[i])){
				soma+=6;
			}else if(strchr("hr",nome[i])){
				soma+=7;
			}else if(strchr("is",nome[i])){
				soma+=8;
			}else if(strchr("jt",nome[i])){
				soma+=9;
			}
			tsoma++;
		}
		}while(nome[0]== '\0');
	printf("%d", soma/tsoma);
}

void exe7(){
	char alfabeto[3][9]={
		{'a','b','c','d','e','f','g','h','i'},
		{'j','k','l','m','n','o','p','q','r'},
		{'s','t','u','v','w','x','y','z'}
	};
	int tam=0,i=0,x,y;
	srand(time(NULL));
	tam = rand() %10;
	
	char aleat[tam];
	
	for(i=0;i<tam;i++){
		x = rand() %3;
		y= rand() % 9;
		
		if(x==2 && y==8){
			aleat[i] = ' ';
		}else{
			aleat[i] = alfabeto [x][y];
		}
	}
	
	printf("%s",aleat);
	
}


void main(){
	exe7();
	
}
