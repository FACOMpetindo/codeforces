import heapq

i = int(input())

for j in range(i):
    n, s, m = map(int, input().split())
    lista = []
    heapq.heapify(lista)
    for k in range(n):
        min, max = map(int, input().split())
        heapq.heappush(lista, [min, max])

    ultimo = 0
    possivel = False
    for compromisso in lista:
        if compromisso[0] - ultimo >= s:
            print("YES")
            possivel = True
            break
        ultimo = compromisso[1]

    if not possivel and m - ultimo >= s:
        print("YES")
        possivel = True

    if not possivel:
        print("NO")
