a, b = map(int, input("").split())

if a < b:
    for i in range(a, b + 1):
        print(f"{i} {b - i + a} -", end=' ')
else:
    for i in range(a, b - 1, -1):
        print(f"{i} {a - i + b} -", end=' ')

print()