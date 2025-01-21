#00011010 00000111 00000001 00000100 00001010 01000001 01001110 00001011 00001110 00000100 을 해석하기
ask="00011010 00000111 00000001 00000100 00001010 01000001 01001110 00001011 00001110 00000100"
ask_list=ask.split()
for index, value in enumerate(ask_list):
    ask_list[index]=int(ask_list[index],2)
print("s",end="")
pre=ord("s")
for value in ask_list:
    pre=chr(pre^value)
    print(pre,end="")
    pre=ord(pre)