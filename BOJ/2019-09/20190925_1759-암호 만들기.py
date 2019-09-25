res_list = []

def per(bit, level, *per_list):
    if level == m:
        mo = 0
        ja = 0
        res = ''
        for element in per_list:
            if element == 'a' or element == 'e' or element == 'i' or element == 'o' or element == 'u':
                mo+=1
            else:
                ja+=1
            res = '%s%s' % (res, element)
        if mo >= 1 and ja >= 2:
            res_list.append(res)
    else:
        for i in reversed(range(n)):
            if (bit & 1<<i):
                break
            per(bit | 1<<i, level+1, *per_list, num[i])

m,n = map(int,input().split())
num = list(input().split())
num.sort()
per(0, 0)

res_list.reverse()
for res in res_list:
    print(res)
