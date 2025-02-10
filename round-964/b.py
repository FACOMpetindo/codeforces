i = int(input())

for j in range(i):
    vitorias = 0
    a1, a2, b1, b2 = map(int, input().split())

    if (a1 > b1 and a2 >= b2) or (a1 >= b1 and a2 > b2):
        vitorias += 1
    if (a1 > b2 and a2 >= b1) or (a1 >= b2 and a2 > b1):
        vitorias += 1
    if (a2 > b2 and a1 >= b1) or (a2 >= b2 and a1 > b1):
        vitorias += 1
    if (a2 > b1 and a1 >= b2) or (a2 >= b1 and a1 > b2):
        vitorias += 1

    print(vitorias)
