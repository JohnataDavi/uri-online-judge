from decimal import *
l = Decimal(input())
while l != 0:
    i = (l-3)+l
    x = Decimal((i - l) / l)
    print("{:.6f}".format(x))
    l = Decimal(input())