#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void exe1(){
	
	const int vlmax= 40;
	char placa [4][7];
	int vl [4], multa[4];
	int i;
	
	for(i=0;i<4;i++){
		scanf("%s",placa[i]);
		getchar();
		scanf("%d",&vl[i]);
		getchar();
		
		int nvl = vl[i] - vlmax;
		if(nvl >0){
			multa[i] = nvl*9;
			if(multa[i]>180){
				multa[i] = 180;
			}
		}
		else{
			multa[i] = 0;
		}
	}
	for(i=0;i<4;i++){
		printf("Placa: %s velocidade: %d multa: %d\n",placa[i],vl[i],multa[i]);
	}
	
}

void exe2(){
	char palavra[31];
	int i=0;
	while(i==0){
		scanf("%s",palavra);getchar();
		if(strlen(palavra)==31){
			i=1;
		}
	}
	for(i=0;i<30;i++){
		printf("%c\n",palavra[i]);
	}
	
}

void exe3(){
	int a=0,e=0,i=0,o=0,u=0,j;
	char algo[11];
	
	scanf("%s",algo);getchar();
	
	for(j=0;j<strlen(algo);j++){
		if(strchr("a",algo[j])){
			a++;
		}
		else if(strchr("e",algo[j])){
			e++;
		}else if(strchr("i",algo[j])){
			i++;
		}else if(strchr("o",algo[j])){
			o++;
		}else if(strchr("u",algo[j])){
			u++;
		}
	}
	
	printf("a: %d / e: %d / i: %d / o: %d / u: %d",a,e,i,o,u);
}

void exe4(){
	int a=0,e=0,i=0,o=0,u=0,j;
	char algo[11];
	
	scanf("%s",algo);getchar();
	
	for(j=0;j<strlen(algo);j++){
		if(strchr("a",algo[j])){
			a++;
		}
		else if(strchr("e",algo[j])){
			e++;
		}else if(strchr("i",algo[j])){
			i++;
		}else if(strchr("o",algo[j])){
			o++;
		}else if(strchr("u",algo[j])){
			u++;
		}
	}
	
	printf("A: ");
	for(j=0;j<a;j++){
		printf("*");
	}printf(" %d\n",a);
	printf("E: ");
	for(j=0;j<e;j++){
		printf("*");
	}printf(" %d\n",e);
	printf("I: ");
	for(j=0;j<i;j++){
		printf("*");
	}printf(" %d\n",i);
	printf("O: ");
	for(j=0;j<o;j++){
		printf("*");
	}printf(" %d\n",o);
	printf("U: ");
	for(j=0;j<u;j++){
		printf("*");
	}printf(" %d",u);
}

void exe5(){ //so aumentar a quantidade para 20
	int a[5],soma=0,produto=1;
	int i;
	
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);getchar();
		if(a[i]<10){
			produto*=a[i];
		}else{
			soma+=a[i];
		}
	}
	printf("S: %d / P: %d",soma,produto);
}

void exe6(){ //ajustar verificação de primo e deixar só o vetor do primo
	int a, qtdp=0,qtdnp=0;
	int primo[5],nprimo[5],i,j,k,flag=0,flag2=0;
	
	for(i=0;i<5;i++){
		flag =0;
		flag2=0;
		scanf("%d",&a);getchar();
		for(k=0;k<qtdp;k++){
			if(a == primo[k]){
				flag2=1;
			}
		}
		for(k=0;k<qtdnp;k++){
			if(a==nprimo[k]){
				flag2=1;
			}
		}
		if(flag2==0){
		
			for(j=2;j<a;j++){
				if(a%j == 0){
					flag=1;
					break;
				}
			}
			if(flag==0){
				primo[qtdp] = a;
				qtdp++;
			}else{
				nprimo[qtdnp] = a;
				qtdnp++;
			}
		}
		else{
			printf("Esse numero ja foi digitado!\n");
			i--;
		}
	}
	
	
	for(i=0;i<qtdp;i++){	
		printf("primos: ");printf("%d ",primo[i]);
	}printf("\n");
	for(i=0;i<qtdnp;i++){	
		printf("não primos: %d ",nprimo[i]);
	}
}

void exe7(){
	
	int a,i;
	
	printf("Tamanho: ");
	scanf("%d",&a);getchar();
	int v1[a],v2[a];
	for(i=0;i<a;i++){
		scanf("%d",&v1[i]);getchar();
	}
	for(i=0;i<a;i++){
		scanf("%d",&v2[i]);getchar();
	}
	printf("\n");
	int v3[a*2];
	for(i=0;i<a*2;i++){
		if(i < a){
			v3[i] = v1[i];
		}else{
			v3[i] = v2[i-a];
		}
		printf("%d\n",v3[i]);
	}
}

void exe8(){
	
	int a,i,j;
	
	printf("Tamanho: ");
	scanf("%d",&a);getchar();
	int v1[a],v2[a];
	
	for(i=0;i<a;i++){
		scanf("%d",&v1[i]);getchar();
	}
	for(i=0;i<a;i++){
		scanf("%d",&v2[i]);getchar();
	}
	
	printf("\n");
	int v3[a*2];
	j=0;
	for(i=0;i<a*2;i+=2){
		v3[i] = v1[j];
		v3[i+1] = v2[j];
		j++;
	}
	
	for(i=0;i<a*2;i++){
		printf("%d\n",v3[i]);
	}
}

void exe9(){
	
	int matriz[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matriz[i][j] = i+j;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
}

void exe10(){
	
	int matriz[5][6],i,j ,l,c, pergunta=0;
	srand(time(NULL));
	
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			matriz[i][j] = rand() %9;
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Escolha uma linha e coluna: ");
	scanf("%d",&l);getchar();
	scanf("%d",&c);getchar();
	
	while(pergunta!=1){
	
		printf("%d\n",matriz[l][c]);
		
		printf("Deseja ver a linha seguinte?");
		scanf("%d",&pergunta);getchar();
		
		//?
	}
}

void exe11(){
	
	int i,tam;
	
	printf("Tamanho: ");
	scanf("%d",&tam);getchar();
	
	printf("#####\n");
	for(i=0;i<tam-2;i++){
		printf("#   #\n");
	}
	printf("#####");
}

void exe12(){
	
	int matriz1[4][4],matriz2[4][4];
	int i,j;
	
	srand(time(NULL));
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			matriz1[i][j] = rand() %20;
			matriz2[i][j] = rand() %20;
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d ", matriz1[i][j]+matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d ", matriz1[i][j]-matriz2[i][j]);
		}
		printf("\n");
	}
}

void exe13(){
	
	float matriz[3][4];
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%f",&matriz[i][j]);getchar();
		}
	}
	
	printf("%f / %f", matriz[0][0], matriz[2][3]);
}

void exe14(){
	
	int matriz[4][3],i,j;
	
	srand(time(NULL));
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			matriz[i][j] = rand() %100;
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ",matriz[j][i]);
		}
		printf("\n");
	}	
}

void exe15(){
	
	int matriz[3][2], mt[2][3], mm[3][3];
	int i,j;
	
	srand(time(NULL));
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			matriz[i][j] = rand()%9;
			mt[j][i]=matriz[i][j];
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ", mt[i][j]);
		}
		printf("\n");
	}
	//terminar multiplicação
}

void main(){
	exe15();
	
}
