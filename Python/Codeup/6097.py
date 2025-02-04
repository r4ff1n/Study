a,b=map(int, input().split())
# c=[[0 for j in range(a)] for i in range(b)]
c=[[0]*b for _ in range(a)]
for i in range(int(input())):
  d,e,f,g=map(int, input().split())
  f-=1;g-=1
  for j in range(d):
    if e==1:
      c[f+j][g]=1 
    else:
      c[f][g+j]=1
for i in range(a):
  print(*c[i])