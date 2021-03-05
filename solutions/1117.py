cont = 0
soma = 0
while cont != 2:
    n = float(input()) 
    if 0.0 <= n <= 10.0:
       soma += n
       cont += 1
    else:
        print("nota invalida")
    
print("media = {:.2f}".format(soma/float(cont)))   