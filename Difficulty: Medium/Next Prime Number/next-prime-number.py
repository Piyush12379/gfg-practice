#User function Template for python3
n = int(input())
n += 1
if n <= 1:
    n = 2
for i in range(2, n):
    if n % i == 0:
        n += 1
print(n)
# Your code here
