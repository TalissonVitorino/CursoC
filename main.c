#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o '\n' se existir
    nome[strcspn(nome, "\n")] = '\0';

    printf("Olá, %s!\n", nome);

    return 0;
}
