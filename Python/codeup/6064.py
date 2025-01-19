a,b,c=map(int, input().split())
print((b if a>b else a) if a<c else (c if b>c else b))
# print(max(a,b,c))
print(min(a,b,c))