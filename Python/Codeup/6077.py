result=0
for _ in range(int(input())+1):
    if _%2==0:result+=_
print(result)

print(sum([_ for _ in range(int(input())+1) if _%2==0]))