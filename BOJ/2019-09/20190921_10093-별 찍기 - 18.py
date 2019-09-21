def star(level, line):
    if level%2:
        if line == 1:
            print('*', end='')
        elif line == 2**level-1:
            print('*' * (2*line-1), end='')
        elif line >= 2**(level-1):
            blank = ' ' * (2*line - 2**level)
            print('*' + blank, end='')
            star(level-1,line-2**(level-1)+1)
            print(blank + '*', end='')
        else:
            blank = ' ' * (2*line-3)
            print('*' + blank + '*', end='')
    else:
        if line == 1:
            print('*' * (2**(level+1)-3), end='')
        elif line == 2**level-1:
            print('*', end='')
        elif line <= 2**(level-1):
            blank = ' ' * (2**level-2*line)
            print('*' + blank, end='')
            star(level-1,line-1)
            print(blank + '*', end='')
        else:
            blank = ' ' * (2**(level+1)-2*line-3)
            print('*' + blank + '*', end='')

n = int(input())
for i in range(1, 2**n) :
    if n%2:
        print(' ' * (2**n-i-1), end='')
    else:
        print(' ' * (i-1), end='')
    star(n, i)
    print('')
