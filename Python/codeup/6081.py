a=int(input(),16)
for _ in range(1,16):
    print(f"{hex(a)[2:].upper()}*{hex(_)[2:].upper()}={hex(a*_)[2:].upper()}")

# 숏코딩
a=int(input(),16)
for i in range(1,16):print(f"{a:X}*{i:X}={a*i:X}")