
def decToBin(num):
    res = ''
    if num == 0:
        return 0
    while num > 0:
        res = str(num % 2) + res
        num //= 2
    return int(res)

num = int(input())
print(decToBin(num))