#include<stdio.h>
int main(void){
    char a[50];
    scanf("%s",&a);
    for(int i=0;a[i]!='\0';i++){
        printf("\'%c\'\n",a[i]);
    }
    
}