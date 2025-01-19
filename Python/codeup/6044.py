a,b=map(int, input().split())
print(a+b)
print(a-b)
print(a*b)
print(a//b)
print(a%b)
print(f"{a/b:.2f}")

# 다른 풀이
a,b=map(int,input().split());print(a+b,a-b,a*b,a//b,a%b,f"{a/b:.2f}",sep="\n")
a,b=map(int,input().split());print(a+b,a-b,a*b,a//b,a%b,"%.2f"%(a/b),sep="\n")
