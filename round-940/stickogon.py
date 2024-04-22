for i in range(int(input())):
    n = int(input())
    tam = list(map(int, input().split()))

    dict = {}
    for i in tam:
        if i in dict:
            dict[i] += 1
        else:
            dict[i] = 1

    max = 0
    for i in dict:
        max += dict[i] // 3

    print(max)
