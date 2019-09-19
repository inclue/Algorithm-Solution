t = int(input())

def cal(sub):
    cnt = 1
    while True:
        sqr = cnt*cnt
        min_num = sqr - cnt
        max_num = sqr + cnt

        if min_num < sub and sub <= sqr:
            return (cnt * 2) - 1
        if sqr < sub and sub <= max_num:
            return (cnt * 2)
        cnt += 1

for i in range(t):
    x,y = map(int, input().split())
    print(cal(y - x))
