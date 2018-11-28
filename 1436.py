lista, ldif = [], []
n = int(input())
for i in range(n):
	i = int(input())
	lista =  list (map (int, input().split()))
	print(len(lista))
	print(lista)
	for i in range(i-1):
		if i > 0:
			if lista[i-1] > lista[i]:	
				ldif.append(lista[i-1] - lista[i])
			else:
				ldif.append(lista[i] - lista[i-1])

print(min(lista))
print(min(ldif))
print(ldif.index(min(ldif)))
