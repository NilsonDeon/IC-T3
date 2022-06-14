int n; // número de participantes
int p; // camisas tamanho P
int m; // camisas tamanho M

Console.Write("Quantas pessoas? ");
n = int.Parse(Console.ReadLine()); // recebendo número de participantes

int[] t = new int[n]; // criando vetor de tamanho n, para armazenar os tamanhos das camisas

    
for (int i = 0; i < n; i++){ // loop para receber o tamanho das camisas
    Console.Write("Insira o tamanho da camisa dos competidores: ");
    t[i] = int.Parse(Console.ReadLine()); // recebendo tamanho das camisas e adicionando ao vetor "t"
}

Console.Write("Quantas camisas P? ");
p = int.Parse(Console.ReadLine()); // recebendo quantidade de camisas P

Console.Write("Quantas camisas M? ");
m = int.Parse(Console.ReadLine()); // recebendo quantidade de camisas M

for (int i = 0; i < n; i++){ // se a camisa na posição "i" for tamanho P

    if (t[i] == 1){ // se a camisa na posição "i" for tamanho P
        p--; // remove uma camisa do tamanho P
    }
    else{
        m--; // remove uma camisa do tamanho M
    }
}

if (p == 0 && m == 0){ // verificando se todos os participantes receberam a camisa que queriam
    Console.WriteLine("S"); // receberam as camisas que queriam
}
else{ // senão
    Console.WriteLine("N"); // não receberam as camisas que queriam
}