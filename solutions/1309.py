while True:
  try:
    string = ""
    cont = 0
    val = str(input())
    cents = int(input())
    tam = int(len(val)/2.0)
    if cents < 10:
            string += str(cents) + "0."
    else:
        string += (str(cents)[::-1]) + "."
    for i in range(len(val)-1, -1, -1):
        if cont == 3:
            string += ","
            cont = 0
        string += val[i]
        cont += 1
    string += "$"
    print(string[::-1])
  except EOFError:
    break