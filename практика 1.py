s = 0
while True:
    n = int(input("Введите число (0 — конец): "))
    if n == 0:
        break
    if n > 0:
        s = s + n
print("Сумма положительных чисел:", s)