#include<stdio.h>


void valorA(int* end){
	
	int *b;
	b = end;
	*b=23;
	printf("b: %d\n",b);
	printf("end: %d\n",end);
}

//prototipo
int soma(int a, int b);

int soma2(int* a, int* b);

/*void main(){
	//teste 1
	/*int a,*b;
	
	b = &a;
	*b=10;
	
	printf("a: %d\n",a);
	printf("b: %d",b);
	//teste 2
	int a;
	valorA(&a);
	
	printf("a: %d\n", a);
}*/

void main(){
	int a =13,b=34;
	int num = soma2(&a,&b);
	printf("%d", num);
	
}

int soma(int a,int b){
	return a+b;
}

int soma2(int* a,int* b){
	return *a + *b;
}


