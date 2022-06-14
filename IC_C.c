#include <stdio.h> // importando biblioteca
#include <stdlib.h> // importando biblioteca

int main()
{

    int n; // número de participantes
    int *t; // ponteiro do vetor com tamanho das camisas
    int p; // camisas tamanho P
    int m; // camisas tamanho M

    printf("Quantas pessoas? ");
    scanf("%d", &n); // recebendo número de participantes

    t = (int *) malloc(n * sizeof(int)); // alocando espaço do vetor com tamanho das camisas

    printf("Insira o tamanho da camisa dos competidores: ");
    for (int i = 0; i < n; i++){ // loop para receber o tamanho das camisas
        scanf("%i", &t[i]); // recebendo tamanho das camisas e adicionando ao vetor "t"
    }

    printf("Quantos querem camisa P: ");
    scanf("%d", &p); // recebendo quantidade de camisas P

    printf("Quantos querem camisa M: ");
    scanf("%d", &m); // recebendo quantidade de camisas M

    for (int i = 0; i < n; i++) { // Loop de verificação das camisas
   
        if (t[i] == 1) { // se a camisa na posição "i" for tamanho P
            p--; // remove uma camisa do tamanho P
        }
        else{ // se não
            m--; // remove uma camisa do tamanho M
        }
    }

    if (p == 0 && m == 0){ // verificando se todos os participantes receberam a camisa que queriam
    
        printf("S"); // receberam as camisas que queriam
    }
    else{
    
        printf("N"); // não receberam as camisas que queriam
    }


    free(t); // liberando memoria do vetor "t"
    return 0;
}
