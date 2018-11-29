lista = []
n = int(input())
for j in range(n):
    lista = list(map (int, input().split()))
    lista.pop(0)
    tam = len(lista) - 1
    print("Case {}: {}".format(j+1, lista[int(tam/2)]))
