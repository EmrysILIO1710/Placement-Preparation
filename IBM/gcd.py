# Write a program to find HCF of two numbers by without using recursion.

# Input format:

# The first line contains any 2 positive numbers separated by space.

# Output format:

# Print the HCF of given two numbers.

# Sample Input:

# 70 15

# Sample Output:

# 5

def findGCD(n1, n2):
    if n1 < n2:
        num = n1
    else:
        num = n2
    for i in range(num, 1, -1):
        if n1 % i == 0 and n2 % i == 0:
            return i

n1, n2 = map(int, input().split())
print(findGCD(n1, n2))