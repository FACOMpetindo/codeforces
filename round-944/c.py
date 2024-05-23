for i in range(int(input())):
    a, b, c, d = map(int, input().split())
    maior_1 = max(a, b)
    menor_1 = min(a, b)
    maior_2 = max(c, d)
    menor_2 = min(c, d)

    if maior_1 > c and maior_1 > d and maior_2 > menor_1 > menor_2:
       print("YES")
    elif  maior_2 > a and maior_2 > b and maior_1 > menor_2 > menor_1:
       print("YES")
    else:
       print("NO")
