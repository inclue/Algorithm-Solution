k = int(input())

def hanoi(n, start, end):
    mid = 6-start-end
    if n == 0:
        return
    hanoi(n-1, start, mid)
    print(start, end)
    hanoi(n-1, mid, end)

print(2**k - 1)
hanoi(k, 1, 3)
