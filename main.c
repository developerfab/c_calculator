#include <stdio.h>
#include <stdlib.h>

/** Calculadora
* Ejemplo de una calculadora en c
* Author: Cristian Fabricio Rodriguez Romero 
*/

/** MENU
*/

void linea_horizontal(){
	printf(" ________________________________________________\n");
}

void titulo_app(){
	printf("|              CALCULADORAS FAB                  |\n");
}

void vacio(){
	printf("|                                                |\n");
}

void imprimir_palabra(int posicion, char palabra[]){
	printf("> %d. %s\n", posicion, palabra);
}

void menu_operacion(){
	printf("> Ingresa 2 numeros separado por una coma\n\n");
}

void menu(void){
	linea_horizontal();
	vacio();
	titulo_app();
	linea_horizontal();
	imprimir_palabra(1, "SUMAR");
	imprimir_palabra(2, "RESTA");
	imprimir_palabra(3, "MULTIPLICACION");
	imprimir_palabra(4, "DIVISION");
	imprimir_palabra(5, "SALIR");
}

/** operaciones
*/

float sumar(float sumando, float sumador){
	float total = sumando + sumador;
	return total;
}

float restar(float minuendo, float sustraendo){
	float total = minuendo - sustraendo;
	return total;
}

float multiplicacion(float multiplicando, float multiplicador){
	float total = multiplicando * multiplicador;
	return total;
}

float division(float dividendo, float divisor){
	float total = dividendo / divisor;
	return total;
}

/**
  Ejecutor principal
*/

int main(int argc, char *argv[]) {
	int opcion = 0;
	float numero1;
	float numero2;
	float total;

	while(opcion != 5){
		menu();
		scanf("%d", &opcion);
		
		if (opcion == 5){
			break;
		}
		
		menu_operacion();
		scanf("%f, %f", &numero1, &numero2);
		switch (opcion){
			case 1:
				total = sumar(numero1, numero2);
				break;
			case 2:
				total = restar(numero1, numero2);
				break;
			case 3:
				total = multiplicacion(numero1, numero2);
				break;
			case 4:
				total = division(numero1, numero2);
				break;
			default:
				printf("Opcion no valida");
				break;
		}
		printf("TOTAL: %f\n", total);
		system("PAUSE");
		system("CLS");
	}
	return 0;
}
