for t in range(10):
    dump=int(input())
    box=list(map(int,input().split()))
    box.sort()
    for i in range(dump):
        if box[0]+1 == box[-1]:
            break
        box[0]+=1
        box[-1]-=1
        box.sort()
    print('#%d %d'%(t+1,box[-1]-box[0]))
