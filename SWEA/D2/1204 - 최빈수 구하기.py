t=int(input())
for _ in range(t):
    no=int(input())
    score=[0]*101
    score_list = list(map(int,input().split()))
    for s in score_list:
        score[s]+=1
     
    res_max=0
    res=0
    for i in range(101):
        if res_max <= score[i]:
            res_max = score[i]
            res = i
    print('#%d %d'%(no,res))
