#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

float num1, num2, resultado;
char operacao;
printf("digite seu primeiro numero\n");
scanf("%f", &num1);

printf("digite seu operador: (+, -, *, /) \n");
scanf(" %c", &operacao);

printf("digite seu segundo numero: \n");
scanf("%f", &num2);

if (operacao == '+'){
resultado = num1 + num2;
printf("Sua soma e igual a %f/n", resultado);}
else if (operacao == '-'){
resultado = num1 - num2;
printf("Sua subtracao e igual a %f\n", resultado);
} else if(operacao == '*'){
resultado = num1 * num2;
printf("Sua multiplicacao e igual a %f\n", resultado);
} else if (operacao = '/'){
resultado = num1 / num2;
printf("Resultado da sua divisao e igual a: %f", resultado);
}

return 0;
}
