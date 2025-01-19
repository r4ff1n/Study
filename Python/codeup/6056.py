a,b=map(int, input().split())
print(bool(a^b))

a=bool(a)
b=bool(b)
print(((not a) and b) or (a and (not b)))
# 이해하기 어려울 수 있음