inn, out = 0, 0
i = int(input())
for x in range(i):
    n = int(input())
    if (10 <= n <= 20):
        inn+=1
    else: 
        out+=1
print(str(inn) + " in")
print(str(out) + " out")