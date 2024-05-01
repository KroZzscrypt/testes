#include <stdio.h>

int main() {
    char resposta;

    printf("O dia está bonito? (s/n): ");
    scanf(" %c", &resposta);

    if (resposta == 's' || resposta == 'S') {
        printf("Que ótimo! Aproveite o dia!\n");
    } else if (resposta == 'n' || resposta == 'N') {
        printf("Que pena! Espero que melhore em breve.\n");
    } else {
        printf("Resposta inválida. Por favor, responda com 's' ou 'n'.\n");
    }

    return 0;
}