#두 정수 A와 B를 입력받은 다음, A×B를 출력하는 프로그램을 작성하시오.
#첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

a,b=map(int,input().split());print(a*b)

#다른 풀이
# print(eval('*'.join(input().split())))

#숏코딩
# a,b,c=input();print(int(a)*int(c))