import random
import os
import time
random.seed(os.urandom(8))


horses=[0,0,0,0,0]
odds=[1.2, 1.4, 1.6, 1.8, 2.0]
track_length = 50
goal = 200
animals = ["🐕", "🐄", "🐖", "🦌", "🐑"] #🐎

print("🏇 경마 게임 🏇")
print("1번마: 성공시 1.2배")
print("2번마: 성공시 1.4배")
print("3번마: 성공시 1.6배")
print("4번마: 성공시 1.8배")
print("5번마: 성공시 2.0배")
sel=int(input("배팅할 말을 선택하세요: (1~5)"))
coin=int(input("얼마를 배팅하시겠어요?: "))


while all(horse < goal for horse in horses):
    horses[0] += random.randint(15,random.randint(16,20))
    horses[1] += random.randint(13,random.randint(17,23))
    horses[2] += random.randint(11,random.randint(14,25))
    horses[3] += random.randint(7,random.randint(11,27))
    horses[4] += random.randint(0,random.randint(0,50))
    os.system("clear")
    print("🏇 경마 진행 중... 🏇")
    
    for i, horse in enumerate(horses):
        pos = int((horse / goal) * (track_length - 1))  # 트랙 내 위치 변환
        track = "-" * track_length  # 고정된 길이
        track = track[:pos] + animals[i] + track[pos + 1:]  # 현재 말 위치 표시
        print(f"{i+1}번마: {track}")
    time.sleep(0.3)

winner = horses.index(max(horses)) + 1

# 결과 출력
print("\n🏁 결승선 도착! 🏁")
print(f"승리한 말: {winner}번말!")

# 배팅 결과 계산
if sel == winner:
    winnings = int(coin * odds[sel - 1])
    print(f"축하합니다! 배팅에 성공하여 {winnings}원을 받았습니다.")
else:
    print("아쉽습니다. 배팅한 말이 승리하지 못했습니다.")

