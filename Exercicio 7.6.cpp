#include<stdio.h>

int main(){

	int contador, contador2, vez = -1, matricula[100], repeticao, opcao, salario[100], maiorSalario, menorSalario, ciclo = 0;
	
	for(contador=0;contador<100;contador++){
	if(contador>0)vez++;
	
	do{
	repeticao=0;
	printf("digite a matricula do funcionario: ");
	scanf("%i",&matricula[contador]);
	
	if(contador>0){
	for(contador2=vez;contador2>=0;contador2--){
		if(matricula[contador]==matricula[contador2]){
			printf("matricula repetida não e permitida\n");
			repeticao=1;}}}
	}while(repeticao==1);
	
	printf("informe o salario do funcionario: ");
	scanf("%i",&salario[contador]);
	
	printf("digite 0 se deseja finalizar: ");
	scanf("%i",&opcao);
	ciclo++;
	
	if(opcao==1)contador=100;
 }
	for(contador=0;contador<ciclo;contador++){
		printf("matrucula: %i \n salario:%i \n\n",matricula[contador],salario[contador]);
	
	}
	for(contador=0;contador<ciclo;contador++){
		if(contador==0){
		menorSalario = salario[contador];
		maiorSalario = salario[contador];}
		else{
		if(salario[contador]>maiorSalario)maiorSalario=salario[contador];
		else if(salario[contador]<menorSalario)menorSalario=salario[contador];}
			}
	
	printf("o maior salario e %i reais e o menor e %i",maiorSalario,menorSalario);

	return 0;
}
