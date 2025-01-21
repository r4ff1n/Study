a=0
b=int(input())
for i in range(b):
    if a<b:
        a+=i
    else: break
print(i-1)

a=0
b=int(input())
i=0
while a<b:
   i+=1
   a+=i
print(i)