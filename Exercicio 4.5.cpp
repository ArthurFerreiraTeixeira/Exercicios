#include<stdio.h>

int main(){
	
	int i, j;
	
	printf("Possibilidades de um lan�amento de 2 dados somarem 7:\n");
	
	for(i=1;i<=6;i++){
		for(j=1;j<=6;j++){
			if(i+j == 7)
				printf("%d - %d \n", i, j);
		}
	}
	
	return 0;
	
}
