a=int(input())
for _ in range(1,a+1):
    if any(d in "369" for d in str(_)):
        print("X",end=" ")
    else:print(_,end=" ")

# 나머지로 계산 풀이
a=int(input())
for _ in range(1,a+1):
    if _%10 in [3,6,9]:
        print("X",end=" ")
    else:print(_,end=" ")