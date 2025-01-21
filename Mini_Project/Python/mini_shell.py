import subprocess

def simple_shell():
    print("Simple Shell (type 'exit' to quit)")
    while True:
        # 사용자 입력 받기
        command = input(">> ")
        
        # 종료 명령 처리
        if command.lower() in ['exit', 'quit']:
            print("Exiting shell...")
            break
        
        try:
            # 명령 실행
            result = subprocess.run(command, shell=True, text=True, capture_output=True)
            # 출력 결과 표시
            if result.stdout:
                print(result.stdout.strip())
            if result.stderr:
                print(f"Error: {result.stderr.strip()}")
        except Exception as e:
            print(f"An error occurred: {e}")

if __name__ == "__main__":
    simple_shell()