a=[list(map(int, input().split())) for _ in range(10)]
a[1][1]=9
for i in range(1,9):
  for j in range(1,9):
    if a[i][j]==9:
      if a[i][j+1]!=1:
        if a[i][j+1]==2:
          a[i][j+1]=9
          break
        a[i][j+1]=9
      elif a[i+1][j] != 1:
          if a[i+1][j] == 2:
              a[i+1][j] = 9
              break
          a[i+1][j] = 9
      else:
        break
  else:
    continue
  break
for _ in a:
    print(*_)

# 완성된 풀이
maze = [list(map(int, input().split())) for _ in range(10)]
x, y = 1, 1
while True:
    if maze[x][y] == 2:
        maze[x][y] = 9
        break
    maze[x][y] = 9
    if maze[x][y+1] == 1 and maze[x+1][y] == 1:
        break
    elif maze[x][y+1] != 1:
        y += 1
    elif maze[x+1][y] != 1:
        x += 1
    else:
        break
for a in maze:
    print(*a)