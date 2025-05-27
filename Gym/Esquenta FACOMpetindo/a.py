pos = input()

if pos in ["h1", "h8", "a1", "a8"]:
    print(3)
elif pos[0] in ['a', 'h'] or pos[1] in ['1', '8']:
    print(5)
else:
    print(8)
