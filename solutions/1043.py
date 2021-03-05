def area(a, b, c):
    return ((a+b)*c)/2

def perimentro(a, b, c):
    return a+b+c
    
a, b, c = map(float, input().split())
cond = True
if ((a-b) < a < (b+c)):
    if ((b-c) < b < (a+c)):
        if ((a-b) < c < (a+b)):
            print("Perimetro = {:.1f}".format(perimentro(a, b, c)))
            cond = False

if(cond):
    print("Area = {:.1f}".format(area(a, b, c)))