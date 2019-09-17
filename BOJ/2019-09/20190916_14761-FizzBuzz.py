x, y, n = map(int, input().split())
fb = {1:'Fizz', 2:'Buzz', 3:'FizzBuzz'}

for i in range(1, n+1):
    flag = 0
    if not i%x:
        flag+=1
    if not i%y:
        flag+=2
    print(fb.get(flag, i))
