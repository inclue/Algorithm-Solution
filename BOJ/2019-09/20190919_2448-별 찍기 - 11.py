n = int(input())
star = ['*', '* *', '*****']
level = 0

def draw(depth, line):
    if depth == 0:
        print(star[line], end='')
        return

    call_line = line - 3 * (2 ** (depth - 1))
    if call_line < 0:
        draw(depth - 1, line)
    else:
        draw(depth - 1, call_line)   
        print(' ' * (2*(3*(2**depth)-line)-1), end='')
        draw(depth - 1, call_line)

for i in range(n):
    if i >= 3 * (2 ** level):
        level+=1
        
    print(' ' * (n-i-1), end='')
    draw(level, i)
    print(' ' * (n-i-1), end='')
    print('')
