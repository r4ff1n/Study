# 공식 풀이 #최소공배수를 이용함
a,b,c=map(int, input().split())
d = 1
while d%a!=0 or d%b!=0 or d%c!=0 :
  d += 1
print(d) 