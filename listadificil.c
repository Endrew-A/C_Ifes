#include <stdio.h>


void rainha(){
	int x, y, mapa[4][4] ={ {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	int i,j,k,flag1=0,flag2=0;
	
	for(i=0;i<4;i++){
		flag1=0;flag2=0;
		printf("Digite o X da %d° rainha: ", i+1);
		scanf("%d",&x);
		getchar();
		printf("Digite o Y da %d° rainha: ", i+1);
		scanf("%d",&y);
		getchar();
		
		/*if(i>0){
			for(j=0;j<=i-1;j++){
				if(x[i]==x[j] || y[i] == y[j]){
					printf("Uma rainha nao pode estar no mesmo local de outra, digite novamente\n");
					i--;
				} 
			}
		}*/
		
		if(mapa[x-1][y-1]!=0){
			printf("Uma rainha nao pode estar no mesmo local de outra, digite novamente\n");
			i--;
			flag1=1;
		}
		
		for(j=0;j<4;j++){
			int linha1 = (x-1)+j-(x-1), linha2=(x-1)-j-(x-1);
			
			
			if((linha1<=3 && mapa[linha1][j] == 1) || (linha2>=0 && mapa[linha2][j]==1)){
			printf("Uma rainha nao pode estar na mesma diagonal de outra, digite novamente\n");
			if(flag1==0){
				i--;
			}
			flag2=1;
			break;
			}
		}
		if(flag1==0 && flag2==0){
			mapa[x-1][y-1] = 1;
		}
	}
	
	
}



void main(){
	rainha();
	
	
}
