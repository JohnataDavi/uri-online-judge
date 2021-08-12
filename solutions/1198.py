while True:
  try:
	  x, y = input().split(" ")
	  x = int(x)
	  y = int(y)
	  print(abs(x - y))
  except EOFError:
    break