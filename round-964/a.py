i = int(input())

for j in range(i):
    num = int(input())
    soma = (num % 10) + (num // 10 % 100)
    print(soma)
