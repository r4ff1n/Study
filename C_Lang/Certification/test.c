#include<stdio.h>
int main(){
    int a[3] = {1,2};
    printf("%d %d %d\n",a[0],a[1],a[2]);
    printf("%d %d %d\n",*a,*a(a+1),a(a+2));
    printf("%d %d %d\n",a[0],a[1],a[2]);
    printf("%d %d %d\n",a[0],a[1],a[2]);

}