# (세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.
# (1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.
# 첫째 줄에 (1)의 위치에 들어갈 세 자리 자연수가, 둘째 줄에 (2)의 위치에 들어갈 세 자리 자연수가 주어진다.

a=int(input())
b=int(input())
print(a*(b%10))
print(a*((b%100)//10))
print(a*(b//100))
print(a*b)

#다른 풀이
a=int(input())
b=input()
for i in reversed(b):
    print(a*int(i))
print(a*int(b))

#숏코딩
# a,b=open(0)
# for x in*b[2::-1],b:print(int(a)*int(x))