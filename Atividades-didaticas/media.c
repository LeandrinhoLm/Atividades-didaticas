#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Sua media e: %.2f\n", media);

    if (media >= 5 && media <= 7) {
        printf("Recuperacao!\n");
    } else if (media >= 8 && media <= 10){
        printf("Aprovado!\n");
    } else if (media <= 4){
    	printf("Reprovado!\n");
	} else {
		printf("digite corretamente!\n");
	}

    return 0;
}
