n1, n2, n3, n4 = map (float, input().split())

media = (n1*2 + n2*3 + n3*4 + n4) / float((2+3+4+1)) 
print("Media: {:.1f}".format(media))

if media >= 7.0:
    print("Aluno aprovado.")
elif 5.0 <= media <= 6.9:
    print("Aluno em exame.")
    nota = float(input())
    print("Nota do exame: {:.1f}".format(nota))

    mediaf = (media+nota) / 2.0

    if mediaf >= 5.0:
         print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")

    print("Media final: {:.1f}".format(mediaf))
else:
    print("Aluno reprovado.")





