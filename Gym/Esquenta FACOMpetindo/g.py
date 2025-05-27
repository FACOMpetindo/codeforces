t = int(input())

for _ in range(t):
    n, s = map(int, input().split())
    v = list(map(int, input().split()))

    sum_ = 0
    ans = float('inf')
    l = 0
    r = 0

    while r < n:
        sum_ += v[r]
        r += 1

        if sum_ == s:
            ans = min(ans, n - (r - l))

        if sum_ > s:
            sum_ -= v[l]
            l += 1

    if ans == float('inf'):
        ans = -1

    print(ans)