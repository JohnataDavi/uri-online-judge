def output(lista):
    for i in lista:
        print(i)

lista = list(map(int, input().split()))
laux = lista.copy()
lista.sort()

output(lista)
print()
#lista.sort(reverse=True)
output(laux)