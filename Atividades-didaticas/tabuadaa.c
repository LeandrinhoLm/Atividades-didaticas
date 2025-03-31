#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int numero, i;

printf("Digite um numero para obter a tabuada dela: ");
scanf("%d", &numero);

for(i = 1; i <= 10; i++){
printf("%d x %d = %d\n", numero, i, numero * i);
}
return 0;
}