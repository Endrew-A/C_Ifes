#include<stdio.h>
#include<string.h>

void exe1(){
	float sl=4302,rp=6749;
	float csl=0.02,crp=0.005;
	int i=0,anos=0;
	
	for(i=0;sl<rp;i++){
		anos=i;
		sl*= 1+csl;
		rp*= 1+crp;
	}
	printf("%d",anos);
}

void exe2(){
	char nc1[20],nc2[20];
	float c1,c2;
	float cc1,cc2;
	int i,anos=0;
	
	scanf("%[^\n]s",nc1);
	getchar();
	scanf("%[^\n]s",nc2);
	getchar();
	scanf("%f",&c1);
	scanf("%f",&c2);
	scanf("%f",&cc1);
	scanf("%f",&cc2);
	
	if(c1>=c2){
		if(cc2>cc1){
		for(i=0;c2<c1;i++){
			anos=i;
			c2*=1+(cc2/100);
			c1*=1+(cc1/100);
		}
		}else{
			printf("A menor cidade nunca sera maior");
		}
	
	}else{
		if(cc1>cc2){
		
		for(i=0;c1<c2;i++){
			anos=i;
			c1*=1+(cc1/100);
			c2*=1+(cc2/100);
		}
		}else{
			printf("a menor cidade nunca sera maior");
		}
	}
	printf("\n%d",anos);
}

void exe3(){
	char nome[20],estadocivil;
	int i=0,idade;
	float renda;
	scanf("%[^\n]",nome);
	getchar();
	scanf("%c",&estadocivil);
	scanf("%d",&idade);
	scanf("%f",&renda);
	while(1){
		if(strlen(nome)<3){
			printf("Digite seu nome novamente: ");
			scanf(" %[^\n]",nome);
			getchar();
			continue;
		}
		if(!(strchr("SCDV",estadocivil))){
			printf("Digite seu EC novamente: ");
			scanf(" %c",&estadocivil);
			continue;
		}
		if(!(idade >=16 && idade <=130)){
			printf("Digite sua idade novamente: ");
			scanf("%d",&idade);
			continue;
		}
		if(renda<=1518){
			printf("Digite sua renda novamente: ");
			scanf("%f",&renda);
			continue;
		}
		break;
	}
}

void exe4(){
	int saque;
	int n2=0,n5=0,n10=0,n20=0,n50=0,n100=0;
	
	scanf("%d",&saque);
	
	if(saque<=2000 && saque%2==0 && saque%5==0){
		n100 = saque/100;
		saque %= 100;
		n50 = saque/50;
		saque%=50;
		n20 = saque/20;
		saque%=20;
		n10 = saque/10;
		saque%=10;
		n5= saque/5;
		saque%=5;
		n2 = saque/2;
		saque%=2;
		
		printf("%d / %d / %d / %d / %d / %d", n2,n5,n10,n20,n50,n100);
		
	}else{
		printf("Valor impossivel de ser sacado");
	}
}

void exe5(){
	char horario;
	scanf("%c",&horario);
	int saque=1,totalsacado=0;
	int n2=0,n5=0,n10=0,n20=0,n50=0,n100=0;	
	
	if(horario == 's'){
		while(saque!=0){
			scanf("%d",&saque);
			totalsacado+=saque;
			saque_(2000,saque,n2,n5,n10,n20,n50,n100);
		}
	}else if(horario == 'n'){
		while(saque!=0){
			scanf("%d",&saque);
			totalsacado+= saque;
			saque_(1000,saque,n2,n5,n10,n20,n50,n100);
		}
	}
	printf("%d", totalsacado);
		
}

void saque_(int limite, int saque,int n2,int n5,int n10,int n20, int n50, int n100){
	
	if(saque<=limite){
			n100 = saque/100;
			saque %= 100;
			n50 = saque/50;
			saque%=50;
			n20 = saque/20;
			saque%=20;
			n10 = saque/10;
			saque%=10;
			n5= saque/5;
			saque%=5;
			n2 = saque/2;
			saque%=2;
			
			if(saque==0){
				printf("%d / %d / %d / %d / %d / %d\n", n2,n5,n10,n20,n50,n100);
			}else{
				printf("Nao e possivel sacar o valor\n");
			}
			
			
		}else{
			printf("Valor impossivel de ser sacado\n");
		}
}


void main(){
	exe5();
	
}
