#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Paciente {
    char nome[50];
    int idade;
    char diagnostico[100];
    struct Psicologo* psicologo;
    struct Paciente* prox;
    struct Paciente* ant; // Ponteiro para o paciente anterior
} Paciente;

typedef struct Psicologo {
    char nome[50];
    char especialidade[50];
    struct Psicologo* prox;
    struct Psicologo* ant; // Ponteiro para o psicólogo anterior
} Psicologo;

typedef struct Sessao {
    char data[20];
    Paciente* paciente;
    Psicologo* psicologo;
    int duracao;
    char observacoes[200];
    struct Sessao* prox;
    struct Sessao* ant; // Ponteiro para a sessão anterior
} Sessao;


// Funções de criação (sem modificações significativas)
// ... (código das funções criarPaciente, criarPsicologo e criarSessao permanece igual)


void adicionarPaciente(Paciente** lista, Paciente* novoPaciente) {
    if (*lista == NULL) {
        *lista = novoPaciente;
        novoPaciente->prox = novoPaciente; // Circular
        novoPaciente->ant = novoPaciente;
    } else {
        Paciente* ultimo = (*lista)->ant;
        novoPaciente->prox = *lista;
        novoPaciente->ant = ultimo;
        ultimo->prox = novoPaciente;
        (*lista)->ant = novoPaciente;
        *lista = novoPaciente;
    }
}

void adicionarPsicologo(Psicologo** lista, Psicologo* novoPsicologo) {
     if (*lista == NULL) {
        *lista = novoPsicologo;
        novoPsicologo->prox = novoPsicologo; // Circular
        novoPsicologo->ant = novoPsicologo;
    } else {
        Psicologo* ultimo = (*lista)->ant;
        novoPsicologo->prox = *lista;
        novoPsicologo->ant = ultimo;
        ultimo->prox = novoPsicologo;
        (*lista)->ant = novoPsicologo;
        *lista = novoPsicologo;
    }
}

void adicionarSessao(Sessao** lista, Sessao* novaSessao) {
    if (*lista == NULL) {
        *lista = novaSessao;
        novaSessao->prox = novaSessao; // Circular
        novaSessao->ant = novaSessao;
    } else {
        Sessao* ultimo = (*lista)->ant;
        novaSessao->prox = *lista;
        novaSessao->ant = ultimo;
        ultimo->prox = novaSessao;
        (*lista)->ant = novaSessao;
        *lista = novaSessao;
    }
}


void exibirPacientes(Paciente* lista) {
    if (lista == NULL) return;

    Paciente* atual = lista;
    do {
        printf("Paciente: %s, Idade: %d, Diagnóstico: %s, Psicólogo: %s\n", 
               atual->nome, atual->idade, atual->diagnostico, atual->psicologo ? atual->psicologo->nome : "Não atribuído"); // verifica se o psicólogo foi atribuído
        atual = atual->prox;
    } while (atual != lista); // Condição de parada para lista circular
}

void exibirSessoes(Sessao* lista) {
    if (lista == NULL) return;

    Sessao* atual = lista;
    do {
        printf("Data: %s, Paciente: %s, Psicólogo: %s, Duração: %d minutos, Observações: %s\n", 
               atual->data, atual->paciente->nome, atual->psicologo->nome, atual->duracao, atual->observacoes);
        atual = atual->prox;
    } while (atual != lista); // Condição de parada para lista circular
}

// ... (restante do código main() sem alterações)
