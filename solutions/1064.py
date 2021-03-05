cont = 0
soma = 0
for i in range(6):
    n = float(input())
    if n > 0:
        soma += n
        cont += 1

print("{} valores positivos".format(cont))
print("{:.1f}".format(soma/float(cont)))