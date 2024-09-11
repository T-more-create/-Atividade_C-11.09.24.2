#include <stdio.h>
#include <stdbool.h>

#define MAX 5  

int p[MAX];  
int t = -1;  


bool pilha_vazia() {
    return t == -1;
}

bool pilha_cheia() {
    return t == MAX - 1;
}

void empilhar(int y) {
    if (pilha_cheia()) {
        printf("Erro: Pilha cheia!\n");
    } else {
        p[++t] = y;
        printf("Elemento %d empilhado\n", y);
    }
}

int desempilhar() {
    if (pilha_vazia()) {
        printf("Erro: Pilha vazia!\n");
        return -1;  
    } else {
        return p[t--];
    }
}


int consultar_topo() {
    if (pilha_vazia()) {
        printf("Erro: Pilha vazia!\n");
        return -1;
    } else {
        return p[t];
    }
}

int main() {
    empilhar(10);
    empilhar(20);
    empilhar(30);
    
    printf("Elemento no topo: %d\n", consultar_topo());
    
    printf("Elemento desempilhado: %d\n", desempilhar());
    
    printf("Elemento no topo: %d\n", consultar_topo());

    return 0;
}