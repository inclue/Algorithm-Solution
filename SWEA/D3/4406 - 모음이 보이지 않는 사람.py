import re
 
T = int(input())
for test_case in range(1, T + 1):
    inputString = input()
    returnString = re.sub('[aeiou]', '', inputString)
    print('#' + str(test_case), returnString)
