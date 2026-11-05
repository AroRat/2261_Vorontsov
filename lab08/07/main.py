a = [int(x) for x in input().split()]
for i in range(len(a)):
    if a[i] < 0:
        print(a[i])
        break
else:
    print("Отрицательных чисел нет")