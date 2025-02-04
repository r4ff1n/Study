#include<stdio.h>
int main(){
    int a[3] = {1,2};
    int *p=a;
    printf("%d %d %d\n",a[0],a[1],a[2]);
    printf("%d %d %d\n",*a,*(a+1),*(a+2));
    printf("%d %d %d\n",*p,*(p+1),*(p+2));
    printf("%d %d %d\n",p[0],p[1],p[2]);

}