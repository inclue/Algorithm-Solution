def make_tree(s,e,idx):
    if s+1 == e:
        tree[idx] = get[s]
    else:
        m=(s+e+1)//2
        tree[idx] = make_tree(s,m,idx*2) + make_tree(m,e,idx*2+1)
    return tree[idx]

def update_tree(s,e,idx,t,diff):
    if s <= t and t < e:
        tree[idx] += diff
    else:
        return
    
    if s+1 == e:
        return
    m=(s+e+1)//2
    update_tree(s,m,idx*2,t,diff)
    update_tree(m,e,idx*2+1,t,diff)

def sum_tree(s,e,idx,l,r):
    if l <= s and e <= r:
        return tree[idx]
    if r < s or e < l:
        return 0
    if s+1 == e:
        return 0
    m=(s+e+1)//2
    return sum_tree(s,m,idx*2,l,r) + sum_tree(m,e,idx*2+1,l,r)

n,m,k = map(int,input().split())
get = []
tree = [0] * (4*n)

get.append(0)
for i in range(1,n+1):
    temp = int(input())
    get.append(temp)
make_tree(1,n+1,1)

for i in range(m+k):
    a,b,c = map(int,input().split())
    if a==1:
        diff = c - get[b]
        get[b] = c
        update_tree(1,n+1,1,b,diff)
    else:
        print(sum_tree(1,n+1,1,b,c+1))
