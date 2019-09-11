max = 0
maxi = 0

for i in range(9):
    num = int(input())
    if num > max:
        max = num
        maxi = i + 1

print(max, maxi, sep='\n')
