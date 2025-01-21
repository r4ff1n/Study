a=[[0 for j in range(19)] for i in range(19)]
for i in range(19):
  a[i]=list(map(int, input().split()))
for i in range(int(input())):
  b, c = map(lambda x: int(x) - 1, input().split())
  # b,c=map(int, input().split())
  # b=b-1
  # c=c-1
  for j in range(19):
    # a[j][b]=int(not a[j][b])
    # a[c][j]=int(not a[c][j])
    a[b][j] = a[b][j] ^ 1
    a[j][c] = a[j][c] ^ 1
for i in range(19):
  print(*a[i])