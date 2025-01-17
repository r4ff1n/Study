# 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
# 첫째 줄에 A, 둘째 줄에 B가 주어진다. (0 < A, B < 10)
a=[]
for i in range(2):
    a.append(int(input()))
print(a[0]+a[1])

# 다른 풀이
# a=input()
# b=input()
# print(int(a)+int(b))

# 숏코딩
# print(sum(map(int,open(0))))
# 해설
# open(0)은 표준 입력을 받아온다. map(int,open(0))은 표준 입력을 받아온 것을 int로 변환한다. 
# sum(map(int,open(0)))은 표준 입력을 받아온 것을 int로 변환한 것을 모두 더한다.
# echo -e "10\n20\n30" | python3 2558.py
# python3 2558.py < input.txt