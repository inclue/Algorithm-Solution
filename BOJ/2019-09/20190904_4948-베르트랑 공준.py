prime = [0] * 25000
cnt = 0

#소수 구하기 - 에라토스테네스의 체
for i in range(2, 250000):
    isPrime = True
    for j in range(cnt):
        if i % prime[j] == 0:
            isPrime = False
            break
            
    if isPrime:
        prime[cnt] = i
        cnt += 1

#입력 및 소수 갯수 판별
while True:
    n = int(input())
    if n == 0:
        break
    prime_bound = [j for j in prime if (j > n and j <= 2 * n)]
    print(len(prime_bound))
