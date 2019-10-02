def dfs(level, *print_list):
    if level == m:
        for res in print_list:
            print(res, end=' ')
        print('')
    else:
        for i in range(10001):
            if num[i] > check[i]:
                check[i]+=1
                dfs(level+1, *print_list, i)
                check[i]-=1

n,m = map(int,input().split())
get_list = list(map(int,input().split()))
num = [0] * 10101
check = [0] * 10101

for get in get_list:
    num[get]+=1

dfs(0, *[])
