y,m,d=input().split('.')
print(d+"-"+m+"-"+y)

#다른 풀이
print(*list(input().split('.'))[::-1],sep='-')