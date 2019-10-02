prime = []
for i in range(2, 10000):
    flag = True
    for j in prime:
        if not i%j:
            flag = False
            break
    if flag:
        prime.append(i)

t = int(input())
for i in range(t):
    n = int(input())
    j=0
    k=len(prime)-1
    gap=(0,0)
    while j<=k:
        if prime[j]+prime[k]<n:
            j+=1
        elif prime[j]+prime[k]>n:
            k-=1
        else:
            gap=(prime[j], prime[k])
            j+=1
            k-=1
    print(gap[0], gap[1])
