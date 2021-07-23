#include<stdio.h> 

int main(){

   	int i, n[20];
   	
   	printf("Sequencia Fibonacci:\n");
   	
   	for(i=1;i<=20;i++){
   		
   		if(i==1)
   			n[i] = 0;
   			else if(i==2)
   				n[i] = 1;
   				else
   					n[i] = n[i-1]+n[i-2];
   		
   		printf("%d - %d \n", i, n[i]);
   	}
 		
	return 0;
	
}
