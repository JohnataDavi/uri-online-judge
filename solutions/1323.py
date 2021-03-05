n = int(input())
while n != 0:
    soma = 0
    for j in range(n):
        soma += (j+1)*(j+1)
    print(soma)
    n = int(input())
