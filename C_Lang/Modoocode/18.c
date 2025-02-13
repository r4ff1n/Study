
#include <stdio.h>

int main()
{
    int arr[5],tmp;
    for(int i=0;i<5;i++){
        scanf("%3d",&arr[i]);
    }
    puts("");
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]<arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
            // {1,2,3,4,5}
            // {2,1,3,4,5}
            // {3,1,2,4,5}

        }
    }
}

