t = int(input())

for _ in range(t):
    n = int(input())
    texto = input()
    m = {}
    can = True

    for i in range(n):
        c = texto[i]
        if c in m:
            if (m[c] - i) % 2 != 0:
                can = False
                break
        m[c] = i

    print("YES" if can else "NO")
