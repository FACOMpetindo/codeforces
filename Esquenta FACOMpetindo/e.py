t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    a.sort()

    can = True
    index = 0

    for i in range(n):
        if a[i] % a[0] != 0:
            if index > 0:
                if a[i] % a[index] != 0:
                    can = False
                    break
            else:
                index = i

    print("YES" if can else "NO")

