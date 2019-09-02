numlist = list(map(int, input().split()))
result = 0
for num in numlist:
    result += (num * num)
print(result % 10)
