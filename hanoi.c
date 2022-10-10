

#include <stdio.h>

void move(int n, int source, int dest, int temp){

        if (n==1){
            printf("Move a disc from %d to %d",source,dest);
            return;
        }
        move(n-1,source,temp,dest);
        printf("\nMove a disc from %d to %d\n",source,dest);
        move(n-1,temp,dest,source);
}


int main()
{   
    int n;
    scanf("%d",&n);
    if (n<=0){
    printf("Wrong Input");}
    else{
        move(n,1,2,3);
        
    }

    return 0;
}
