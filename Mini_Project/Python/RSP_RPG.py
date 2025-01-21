import random

states = 0
class  Player: #플레이어에 대한 상태 및 설정 추후 캐릭터의 스테이터스의 확장이 용이하도록 구성
    def  __init__(self, name):
        self.name= name
        self.win = 0
        self.draw = 0
        self.lose = False
        self.hp = 100
        self.atk = 20
        self.defense = 5
    def play (self): # input 값을 return 
        print("="*20,"\nTyping with English!!!\n",'='*20,"\nRock\nScissors\nPaper\n")
        return input(">>>")

class Monster:
    def __init__(self, name, hp, atk, defense):
        self.name = name
        self.hp = hp
        self.atk = atk
        self.defense = defense
    def play (self):  #random 함수를
        return random.choice(['Rock', 'Scissors', 'Paper'])

player = Player(input("Enter player name: "))
if states == 0:
    print("Welcome to the game!")
    states = 1
hamster= Monster("Cute Hamster", 50, 3, 1)
cat= Monster("Happy Cat", 75, 7, 5)
rich= Monster("Young&Rich", 300, 50, 15)


while player.win <3 and player.lose == False:
    if player.win>=3:
        print("\nGame win!\nSpecial Thanks to SDP!!\n")
        break
    #게임 내에서 현재 상태 보여주는 스테이터스 창
    def status():
        print(f"Player: {player.name} vs Monster: {monster.name}")
        print(f"HP: {player.hp} | {monster.hp}")
        print(f"ATK: {player.atk} | {monster.atk}")
        print(f"DEF: {player.defense} | {monster.defense}")
    #랜덤으로 몬스터 선택
    monster = random.choice([hamster, cat, rich])
    print(f"Player: {player.name} vs Monster: {monster.name}")
    while monster.hp > 0 and player.hp > 0:
        player_rsp=player.play().lower()
        monster_rsp=monster.play().lower()
        print(f"{player_rsp} VS {monster_rsp}")
        #hp 카운터
        if player.hp <= 0:
            print("You lose!\n")
            player.lose = True
            break
        if monster.hp <= 0:
            print("You win!\n")
            player.win += 1
            break
        if player_rsp == monster_rsp:
            print("Draw!\n")
            status()
        elif player_rsp == 'Rock'.lower() and monster_rsp == 'Scissors'.lower():
            print("Win!\n")
            status()
            monster.hp = monster.hp + monster.defense - player.atk
        elif player_rsp == 'Scissors'.lower() and monster_rsp == 'Paper'.lower():
            print("Win!\n")
            status()
            monster.hp = monster.hp + monster.defense - player.atk
        elif player_rsp == 'Paper'.lower() and monster_rsp == 'Rock'.lower():
            print("Win!\n")
            status()
            monster.hp = monster.hp + monster.defense - player.atk
        elif player_rsp not in ['rock', 'scissors', 'paper']:
            print("wrong input\n")
            continue
        else:
            print("Lose!\n")
            player.hp = player.hp + player.defense - monster.atk
            if player.hp <= 0:
                exit()
            status()