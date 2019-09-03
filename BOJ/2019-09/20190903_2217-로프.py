n = int(input())
num = [None] * n

for i in range(n):
    num[i] = int(input())

num.sort(reverse=True)
max = 0

for i in range(n):
    weight = num[i] * (i + 1)
    if max < weight:
        max = weight
print(max)
