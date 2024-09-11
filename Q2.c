#include <stdio.h>
#include <string.h>

void invertePalavra(char *inicio, char *fim) {
    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}


void inverteLetrasPalavras(char *sentenca) {
    char *inicioPalavra = sentenca;
    char *ptr = sentenca;

   
    while (*ptr) {
        if (*ptr == ' ') {
            invertePalavra(inicioPalavra, ptr - 1); 
            inicioPalavra = ptr + 1;  
        }
        ptr++;
    }


    invertePalavra(inicioPalavra, ptr - 1);
}

int main() {
    char sentenca[] = "AMU MEGASNEM ATERCES";

    printf("Sentença original: %s\n", sentenca);

    inverteLetrasPalavras(sentenca);

    printf("Sentença invertida: %s\n", sentenca);

    return 0;
}
