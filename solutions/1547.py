i = int(input())
for x in range(i):
    lista, listaD  = [], []
    qt, s = map(int, input().split())
    lista.extend(map(int, input().split()))
    cond = False
    for y in lista:
        if (y == s):
            print(lista.index(y) + 1)
            cond = True
            break
        else:
            dif = s - y
            listaD.append( dif if dif > 0 else dif * -1)

    if (not cond):
        print(listaD.index(min(listaD, key = int)) + 1)       