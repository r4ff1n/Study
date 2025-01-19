a=int(input())
if a>=90 :
  print('A')
else :
  if a>=70 :
    print('B')
  else:
    if a>=40 :
      print('C')
    else:
      print('D')  

# 한 줄 코딩
a=int(input());print(("A" if a<0 else "C") if a%2==0 else ("B" if a<0 else "D"))