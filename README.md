# Embedded-C-tasks
// Linear search code 
#include <stdio.h>

int main()
{
    int x,i,arr[100],key;
    
    printf("enter number of elements");
    scanf("%d",&x);
    printf("enter your %d elements",x);
    for(i=0;i<x;i++)
        scanf("%d",&arr[i]);
        printf("enter value to find");
        scanf("%d",&key);
        
        for(i=0;i<x;i++){
            if(key==arr[i]){
                printf("%d found at postion %d",key,i);
                break;
            }
        }
               
            if(i==x)
                    printf("your key is not found at list");
            
    return 0;
}

