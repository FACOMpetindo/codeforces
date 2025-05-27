import bisect

t = int(input())
    
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    pre = [0] * n
    pre[0] = a[0]
    for i in range(1, n):
        pre[i] = pre[i-1] + a[i]
    
    ans = n
    
    for i in range(n):
        soma_segmento = pre[i]
        soma_total = soma_segmento * 2
        
        curr = i + 1
        last = i
        
        while soma_total in pre:
            idx = bisect.bisect_left(pre, soma_total)
            soma_total += soma_segmento
            curr = max(curr, idx-last)
            last = idx

            if last == n - 1:
            	ans = min(ans, curr)
    
    print(ans)