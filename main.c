#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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



Paciente* criarPaciente(char* nome, int idade, char* diagnostico, Psicologo* psicologo) {
    
}

Psicologo* criarPsicologo(char* nome, char* especialidade) {
    
}

Sessao* criarSessao(char* data, Paciente* paciente, Psicologo* psicologo, int duracao, char* observacoes) {
    
}


int main() {
    Paciente* listaPacientes = NULL;
    Psicologo* listaPsicologos = NULL;
    Sessao* listaSessoes = NULL;


Paciente* criarPaciente(char* nome, int idade, char* diagnostico, Psicologo* psicologo) {
    Paciente* novoPaciente = (Paciente*)malloc(sizeof(Paciente));
    if (!novoPaciente) { perror("Erro ao alocar Paciente"); exit(EXIT_FAILURE); }
    strcpy(novoPaciente->nome, nome); 
    return novoPaciente;
}



void adicionarPaciente(Paciente** lista, Paciente* novoPaciente) {
   
}



void exibirPacientes(Paciente* lista) {
    
}

void exibirSessoes(Sessao* lista) {
   
}
    printf("=== Pacientes ===\n");
    exibirPacientes(listaPacientes);

    printf("\n=== Sessões ===\n");
    exibirSessoes(listaSessoes);


    return 0;
}
