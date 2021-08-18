def mdc(a, b):
    if b == 0:
        return a
    return mdc(b, a%b)
    
while True:
  try:
    x, y = map(int, input().split())
    if x == y:
      print(4)
    else:
      maxd = mdc(x, y)
      print(int(4 + (((x/maxd)-1)*2) + (((y/maxd)-1)*2)))
  except EOFError:
    break