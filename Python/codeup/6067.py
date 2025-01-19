a=int(input())
if a<0:
    if a%2==0:print('A')
    else:print('B')
else:
    if a%2==0:print('C')
    else:print('D')

# 한 줄 코딩
a=int(input())
print(("A" if a<0 else "C") if a%2==0 else ("B" if a<0 else "D"))