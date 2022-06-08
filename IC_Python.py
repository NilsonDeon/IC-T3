
n = 0  # número de pessoas
t = []  # list com tamanho das camisas
p = 0  # camisas tamanho P
m = 0  # camisas tamanho M

n = int(input("Quantas pessoas? "))  # recebendo número de participantes

for i in range(n):  # loop para receber o tamanho das camisas
    # recebendo tamanho das camisas e adicionando ao list "t"
    t.append(int(input(f"Insita o tamanho da camisa do competidor {i}: ")))


# recebendo quantidade de camisas P
p = int(input("Quantos querem camisa P: "))
# recebendo quantidade de camisas M
m = int(input("Quantos querem camisa M: "))

for i in range(n):  # Loop de verificação das camisas
    if t[i] == 1:  # se a camisa na posição "i" for tamanho P
        p -= 1  # remove uma camisa do tamanho P
    else:  # se não
        m -= 1  # remove uma camisa do tamanho M

if p == 0 and m == 0:  # verificando se todos os participantes receberam a camisa que queriam
    print("S")  # receberam as camisas que queriam
else:  # se não
    print("N")  # não receberam as camisas que queriam
