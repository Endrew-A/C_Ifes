#include <stdio.h>
#include <string.h>

void exe1(){
	int i;
	for(i=0;i<100;i++){
		printf("Eu gosto de programação em c\n");
	}
}

void exe2(){
	int i;
	for(i =1;i<501;i++){
		printf("%d / %d\n", i,i/5);
	}
}

void exe3(){
	char palavra[20];
	int i=0,vogal=0;
	scanf("%s",&palavra);
	while(palavra[i]!='\0'){
		if(strchr("aeiou",palavra[i])){
			vogal++;
		}
		i++;
	}
	printf("%d",vogal);
}

void exe4(){
	char palavra[20];
	int i=0,j=0,vogal=0,ttvogal=0;
	for(i=0;i<20;i++){
		scanf("%s",palavra);
		vogal=0;
		for(j=0;palavra[j]!='\0';j++){
			if(strchr("aeiou",palavra[j])){
				vogal++;
			}
		}
		ttvogal+=vogal;
		printf("%d\n",vogal);
	}
	printf("\n%d",ttvogal);
}

void exe5(){
	int i=1;
	while(i!=0){
		scanf("%d",&i);
		
		switch(i){
			case 1:
				printf("%d\n",i);
				break;
			case 2:
				printf("%d\n",i);
				break;
			case 3:
				printf("%d\n",i);
				break;
			case 4:
				printf("%d\n",i);
				break;
			case 5:
				printf("%d\n",i);
				break;
			case 6:
				printf("%d\n",i);
				break;
			case 7:
				printf("%d\n",i);
				break;
			case 8:
				printf("%d\n",i);
				break;
			case 9:
				printf("%d\n",i);
				break;
		}
	}
}

void exe6()
{
	char nome[20];
	float slr,gasto=0;
	int i,depend;
	
	for(i=0;i<3;i++){
		scanf("%s",nome);
		scanf("%f",&slr);
		scanf("%d",&depend);
		
		if(slr<1500){
			gasto+= slr*(1+0.06*depend) - slr;
			
		}else{
			gasto+= slr*(1+0.04*depend) - slr;
		}
	}
	printf("%.2f",gasto);
}

void exe7(){
	int ttpalavras=0,ttvogal=0,vogal=0,i=0;
	char palavra[20];
	
	while(vogal!=1){
		scanf("%s",palavra);
		vogal=0;
		
		while(palavra[i]!='\0'){
			if(strchr("aeiou",palavra[i])){
				vogal++;
			}
		i++;	
		}
		i=0;
		ttpalavras++;
		ttvogal+=vogal;
	}
	printf("%d / %d", ttpalavras,ttvogal);
}

void main(){
	exe7();
	
}
