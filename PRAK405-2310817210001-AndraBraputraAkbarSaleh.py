a, b = map(int, input("").split())
total = 0
total2 = 0

for i in range(1, a + 1):
    total += i * b
    output = "(" + ") + (".join([f"{j} * {b}" for j in range(i, 0, -1)]) + ")"
    print(f"{output} = {total}")
    total2 += total

print(total2)