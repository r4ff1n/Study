// let a=1 // 제약이 없음, 일반적인 방법
// var a=1 // 최초의 변수 선언 방법, 변수 선언 시 중복된 변수가 있다면 재선언 할 수 없음. 즉, 현재로서는 사용할 이유가 없음
// const a=2 //상수

function myFunction(x){
    let temp = 2*x+3
    return temp
}

myFunction(3)

function myFunction2(x,y){
    let temp = x+y
    return temp
}

function fly(){
    openWings();
    while(true){
        moveWings();
    }
}

add=()=>{let temp = x+y}
add(1,2)

if(money>5000){
    rideTaxi()
}else if(money>2000){
    rideBus()
}else{walk()}

for(let i=0; i<10; i++){
    console.log("나무 찍기"+i);
}
