#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição das structs
typedef struct Paciente {
    char nome[50];
    int idade;
    char diagnostico[100];
    struct Psicologo* psicologo;
    struct Paciente* prox;
    struct Paciente* ant;
} Paciente;

typedef struct Psicologo {
    char nome[50];
    char especialidade[50];
    struct Psicologo* prox;
    struct Psicologo* ant;
} Psicologo;

typedef struct Sessao {
    char data[20];
    Paciente* paciente;
    Psicologo* psicologo;
    int duracao;
    char observacoes[200];
    struct Sessao* prox;
    struct Sessao* ant;
} Sessao;


// Funções de criação
Paciente* criarPaciente(char* nome, int idade, char* diagnostico, Psicologo* psicologo) {
    // ... (implementação - alocação de memória e tratamento de erros)
}

Psicologo* criarPsicologo(char* nome, char* especialidade) {
    // ... (implementação - alocação de memória e tratamento de erros)
}

Sessao* criarSessao(char* data, Paciente* paciente, Psicologo* psicologo, int duracao, char* observacoes) {
    // ... (implementação - alocação de memória e tratamento de erros)
}

// Funções adicionarPaciente, adicionarPsicologo, adicionarSessao (implementações)
// ...

// Funções exibirPacientes, exibirSessoes (implementações)
// ...


int main() {
    Paciente* listaPacientes = NULL;
    Psicologo* listaPsicologos = NULL;
    Sessao* listaSessoes = NULL;


Paciente* criarPaciente(char* nome, int idade, char* diagnostico, Psicologo* psicologo) {
    Paciente* novoPaciente = (Paciente*)malloc(sizeof(Paciente));
    if (!novoPaciente) { perror("Erro ao alocar Paciente"); exit(EXIT_FAILURE); }
    strcpy(novoPaciente->nome, nome); // ... (inicializar os outros membros)
    return novoPaciente;
}

// Implementar criarPsicologo() e criarSessao() de forma semelhante

void adicionarPaciente(Paciente** lista, Paciente* novoPaciente) {
    // ... (implementação da função)
}

// Implementar adicionarPsicologo() e adicionarSessao()

void exibirPacientes(Paciente* lista) {
    // ... (implementação da função)
}

void exibirSessoes(Sessao* lista) {
    // ... (implementação da função)
}
    printf("=== Pacientes ===\n");
    exibirPacientes(listaPacientes);

    printf("\n=== Sessões ===\n");
    exibirSessoes(listaSessoes);

    // Liberação de memória (implementar para as três listas)
    // ...

    return 0;
}
