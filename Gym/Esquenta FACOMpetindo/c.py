n = int(input())
numeros = list(map(int, input().split()))  

soma = sum(numeros)  

if soma / n >= 4.5:  
    print(0)  
    exit()  

numeros.sort()  

resp = 0  

for i in range(n):  
    soma += (5 - numeros[i])  
    numeros[i] = 5  
    resp += 1  

    if soma / n >= 4.5:  
        print(resp)  
        exit()  
