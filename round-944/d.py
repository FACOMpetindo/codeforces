for i in range(int(input())):
    cortes = 0
    bstring = input()
    ultimo = 0
    anterior = ""
    diferente = False
    tam = len(bstring)

    if tam % 2 != 0:
        ultimo = tam - 2
    else:
        ultimo = tam - 1

    if tam == 1:
        print(1)
    else:
        for i in range(0, ultimo, 2):
            print(i)
            if bstring[i] == "0" and bstring[i+1] == "0":
                cortes += 0
            elif bstring[i] == "0" and bstring[i+1] == "1" and not diferente:
                cortes += 1
                diferente = True
            elif bstring[i] == "0" and bstring[i+1] == "1":
                cortes += 2
            elif bstring[i] == "1" and bstring[i+1] == "1":
                cortes += 0
            else:
                cortes += 1
            anterior = bstring[i+1]

        if ultimo == tam-2:
            if anterior != bstring[tam-1]:
                cortes += 1

        cortes += 1
        print(cortes)
