t = int(input())
 
for _ in range(t):
    n, a, b = map(int, input().split())
    aux = 0
 
    for i in range(n):
        if aux == b:
            aux = 0
 
        print(chr(ord('a') + aux), end="")
        aux += 1
 
    print()