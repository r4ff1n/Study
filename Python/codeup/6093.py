#공식 풀이
n=int(input())
a=input().split()
for i in range(n-1, -1, -1) :
  print(a[i], end=' ')

# 직접 풀이
input()
a=input().split()
a.reverse()
print(*a)