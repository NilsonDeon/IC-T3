#include <iostream>

using namespace std;

int main()
{
    int n;  // número de participantes
    int *t; // ponteiro do vetor com tamanho das camisas
    int p;  // camisas tamanho P
    int m;  // camisas tamanho M

    cout << "Quantas pessoas? ";
    cin >> n; // recebendo número de participantes

    t = new int[n]; // alocando espaço do vetor com tamanho das camisas

    for (int i = 0; i < n; i++)
    {
        cout << "Qual o tamanho da camisa do competidor: ";
        cin >> t[i]; // recebendo tamanho das camisas e adicionando ao vetor "t"
    }

    cout << "Quantas camisas P? ";
    cin >> p; // recebendo quantidade de camisas P

    cout << "Quantas camisas M? ";
    cin >> m; // recebendo quantidade de camisas M

    for (int i = 0; i < n; i++) // se a camisa na posição "i" for tamanho P
    {
        if (t[i] == 1){ // se a camisa na posição "i" for tamanho P
            p--; // remove uma camisa do tamanho P
        }
        else{
            m--; // remove uma camisa do tamanho M
        }
    }

    if (p == 0 && m == 0) // verificando se todos os participantes receberam a camisa que queriam
    {
        cout << "S"; // receberam as camisas que queriam
    }
    else
    {
        cout << "N"; // não receberam as camisas que queriam
    }

    return 0;
}
