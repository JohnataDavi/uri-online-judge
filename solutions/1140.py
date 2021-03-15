frase = list(map(str,input().split()))
while(frase[0] != "*"):
	flag = True
	x = 0
	tam = len(frase) - 1
	while(x < tam and flag):
		if(frase[x][:1].lower() != frase[x + 1][:1].lower()):
			flag = False
		x+=1
	if(flag):
		print("Y")
	else:
		print("N")
	frase = list(map(str,input().split()))
