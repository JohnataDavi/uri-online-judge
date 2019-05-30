def mdc(x, y):
    aux = 0
    while (x%y!=0):
        aux = x%y
        x = y
        y = aux
    return y

i = int(input())
for x in range(i):
    r, v = map(int, input().split())
    p = mdc(r, v) if r>v else mdc(v, r)
    print(p)