a = input()
b = input()
 
for i in range(len(a)):
    x = int(a[i])
    y = int(b[i])
    print(x ^ y, end="")
 
print()