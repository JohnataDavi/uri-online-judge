a, b, c = map(int, input().split())

while((a and b and c) != 0):
    print(int((a * b * c) ** (1/3)))
    a, b, c = map(int, input().split())