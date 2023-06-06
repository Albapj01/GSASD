#include <time.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct numeros numeros;

int suma(int n1, int n2){
	int result = n1+n2;
	return result;
}

int main(int argc, char *argv[]){

	int numero1;
	int numero2;

	printf("Introduzca el primer numero que desea sumar:\n");
	scanf("%d", &numero1);
	printf("Introduzca el segundo numero que desea sumar:\n");
	scanf("%d", &numero2);

	int result=0;

	clock_t begin = clock();
	
	for(int i=0; i<100000; i++){
		result = result + suma(numero1, numero2);
	}
	
	clock_t end = clock();

	double time;

	time = (double)(end-begin) / CLOCKS_PER_SEC;

	printf("La suma es %d, y el tiempo consumido es %f\n", result, time);

	exit(0);


}

