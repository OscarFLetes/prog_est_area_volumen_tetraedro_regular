/* Autor: Oscar Eduardo Fletes Ixta, Realizado: 04/02/2022
	Programa que pide datos para calcular el area y volumen de un tetraedo regular
	
	Progama en c que calcula el area y volumen de de un tetraedo regular, con el uso de la libreria math.h para las constantes
	matematicas, uso del scanf y operaciones aritméticas
	
	Autor:Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo float
		* Uso de la libreria math.h 
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo float, uso del scanf, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 2 variable del tipo float (valor de a para la area, valor de a para el volumen)
	El programa pide datos para calcular el area y volumen de un tetraedo regular

	*/
	
#include<stdio.h>//libreria para el cuerpo de c
#include<math.h>//libreria para constantes matematicas 

int main(){
	//Variables
	float V, A, a1, a2; //Variables con decimal
	//Entrada
	printf("Primero vamos a introducir los valores para calcular el area \n");//imprime mensaje 
	printf("Introduce el valor de a: ");//imprime mensaje 
	scanf("%f", &a1);//lee el numero insertado por el teclado
	printf("Ahora vamos a introducir los valores para calcular el volumen \n");//imprime mensaje 
	printf ("Introduce el vlaor de a: ");//imprime mensaje 
	scanf("%f", &a2);//lee el numero insertado por el teclado
	//Proceso
	A=sqrt(3)*pow(a1,2);//calcula el area
	//sqrt es para calcualar raiz cuadrara 
	//pow es para elevar un numero a la potencia n
	V=sqrt(2)*pow(a2,2)/12;//calcula el volumen
	//Salida
	printf("El valor del area es %f \n", A);//imprime la saldia del area
	printf("El valor del volumen es %f", V);//imprime la saldia del volumen
	
	return 0;
}
