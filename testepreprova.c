#include <stdio.h>

void teste1(){
	int n=1, maior=0,menor=0;
	while(n!=0){
		scanf("%d",&n);
		
		if(n>maior){
			maior = n;
		}else if(n< menor && n!=0){
			menor = n;
		}
	}
	printf("%d / %d", maior,menor);
}

void teste2(){
	
}


void main(){
	teste1();
	
}
