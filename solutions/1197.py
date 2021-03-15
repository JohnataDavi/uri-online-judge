while True:
  try:
	  x, y = input().split(" ")
	  x = int(x)
	  y = int(y)
	  print(x*y*2)
  except EOFError:
    break
