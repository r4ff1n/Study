a=list(map(int, input().split()))
[print("even") if _%2==0 else print("odd") for _ in a]