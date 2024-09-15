# Consider a string, S, that is a series of characters, each followed by its frequency as an integer. 
# The string is not compressed correctly, so there may be multiple occurrences of the same character. 
# A properly compressed string will consist of one instance of each character in alphabetical order 
# followed by the total count of that character within the string.

def findFrequency(s):
    lst = []
    temp = ''
    i = 0
    while i < len(s):
        j = i + 1
        while j < len(s) and s[j].isdigit() :
            j += 1
        if s[i] not in lst:
            lst.append(s[i])
            lst.append(s[i + 1:j])
        else:
            lst[lst.index(s[i]) + 1] = str(int(lst[lst.index(s[i]) + 1]) + int(s[i + 1:j]))
        i = j
    lst2 = []
    for i in range(0, len(lst), 2):
        lst2.append(lst[i] + lst[i + 1])
    lst2.sort()
    return ''.join(lst2)

s = input()
print(findFrequency(s))