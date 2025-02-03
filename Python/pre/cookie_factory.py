import random
import os
random.seed(os.urandom(8))

def success():
    print("쿠키를 성공적으로 가져왔어요!")

def fail():
    print("쿠키를 교환소로 가져가는 길에")
    print("떨어트려 다 깨져버렸어요...")
    print("**다음엔 더 조심히 가져와야겠어요***")
    
def play():
    if random.randint(1,10)<=3:
        success()
    else:
        fail()
play()