#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

void main () {
//Implementa acentuação PT-BR
SetConsoleOutputCP(65001);

int modo;


while (modo < 1 || modo > 4) {
printf ("Escolha o modo da calculadora: ");
printf ("\n1. Somar");
printf ("\n2. Subtrair");
printf ("\n3. Multiplicar");
printf ("\n4. Dividir\n");
scanf ("%d", &modo);

system("clear || cls");

switch (modo) {
    case 1: 
        printf ("\nA calculadora está no modo de SOMA");
        break;
    case 2: 
        printf ("\nA calculadora está no modo de SUBTRAÇÃO");
        break;
    case 3: 
        printf ("\nA calculadora está no modo de MULTIPLICAÇÃO");
        break;
    case 4: 
        printf ("\nA calculadora está no modo de DIVISÃO");
        break;
    default: 
        printf ("\nOpção inserida inválida\n\n");
        break;
} }


float valor1;
float valor2; 

printf ("\n\nInsira o primeiro valor: ");
scanf ("%f", &valor1);
printf ("\nInsira o segundo valor: ");
scanf ("%f", &valor2);
printf ("\nOs valores selecionados foram: %.2f e %.2f", valor1, valor2);

switch (modo) {
    case 1: 
        printf ("\n%.2f + %.2f = %.2f", valor1, valor2, valor1 + valor2);
        break;
    case 2: 
        printf ("\n%.2f - %.2f = %.2f", valor1, valor2, valor1 - valor2);
        break;
    case 3: 
        printf ("\n%.2f * %.2f = %.2f", valor1, valor2, valor1 * valor2);
        break;
    case 4: 
        printf ("\n%.2f / %.2f = %.2f", valor1, valor2, valor1 / valor2);
        break;
}




}