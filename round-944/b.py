for i in range(int(input())):
    s = input()
    c = s[0]
    possivel = False
    j = 0

    for j in range(len(s)):
        if s[j] != c:
            possivel = True
            break

    if possivel:
        print("YES")
        new_s = s[j] + s[1:j] + c + s[j+1:]
        print(new_s)
    else:
        print("NO")
