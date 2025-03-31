#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

int idade;

printf("Digite sua idade");
scanf("%d", &idade);

if( idade <= 11){
printf("Voce e uma crianca \n");
} else if (idade >= 12 && idade <= 17){
printf("Voce e adolecente \n");
} else if (idade >=18 && idade <= 63){
printf("Voce e adulto \n");
} else {
printf("Voce e idoso \n");
}
printf("Voce tem %d anos \n", idade);
return 0;
}
