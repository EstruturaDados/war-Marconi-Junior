// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
//        
#include <stdio.h>
#include <string.h>

//=== DESAFIO WAR ESTRUTURADO ===

// Criação da variável global
#define MAX_TERRITORIO 5

// Criação da estrutura com o método 'typedef'
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

// --Função principal (main)
int main() {

    // Criação do array para armazenar 5 territórios
    Territorio territorios[MAX_TERRITORIO];
    printf("\n===================================\n");
    printf("WAR ESTRUTURADO - CADASTRO INICIAL\n");
    printf("===================================\n\n");
    printf("Cadastro de até 5 territórios iniciais do mundo.\n\n");

    // Cadastro dos territórios
    for (int i = 0; i < MAX_TERRITORIO; i++) {
        printf("--- Cadastro do Território %d ---\n", i + 1);

        printf("Nome do Território: ");
        scanf("%s", territorios[i].nome);

        printf("Cor do Exército (ex: Azul, Verde...): ");
        scanf("%s", territorios[i].cor);

        printf("Quantidade de Tropas: ");
        scanf("%d", &territorios[i].tropas);
        
        printf("\n");
        // Optei pola leitura simples da string, ainda não dominei o uso do 'fgets'
    }
    // Exibição dos dados cadastrados
    printf("\nCadastro inicial concluído com sucesso!\n");
    
    // Exibição dos dados cadastrados
    printf("\n===================================\n");
    printf("MAPA DO MUNDO - ESTADO ATUAL\n");
    printf("===================================\n\n");

    for (int i = 0; i < MAX_TERRITORIO; i++) {
        printf("TERRITÓRIO %d:\n", i + 1); // Incrementação a partir do índice
        printf(" - Nome: %s\n", territorios[i].nome);
        printf(" - Dominado por: Exército: %s\n", territorios[i].cor);
        printf(" - Tropas: %d\n", territorios[i].tropas);
        if(i < 4){
        printf("-----------------------------\n");
    }}

    return 0;
}