for k in range(10):
    n=int(input())
    height=list(map(int,input().split()))
    res=0
    for i in range(2,n-2):
        jomang=max(height[i-2],height[i-1],height[i+1],height[i+2])
        if height[i] > jomang:
            res += (height[i]-jomang)
    print("#%d %d"%(k+1,res))
