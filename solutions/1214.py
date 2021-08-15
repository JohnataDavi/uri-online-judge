def media(lista):
    sum = 0
    for x in lista:
        sum += x
    return (float) (sum / len(lista))

def qtd(lista, avg):
    cont = 0
    for x in lista:
       if x > avg:
           cont+=1
    return cont

i = int(input())
for x in range(i):
    lista = [None]
    lista = list(map(int, input().split()))
    lista.pop(0)
    avg = media(lista)
    qtdAlunos = qtd(lista, avg)
    print("{:.3f}%".format((qtdAlunos/len(lista)) * 100))