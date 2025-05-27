n = int(input())
dias = [int(x) for x in input().split()]

dias.sort()

ans = 0
dia = 1
for d in dias:
    if (d >= dia):
        dia += 1
        ans += 1

print(ans)
