// Online C compiler to run C program online
#include <stdio.h>
#define MAXNUM 10U
int last=0;


int insert(int aPos, int* aArray,int aValue)
{
    
    if(aPos>=last)
    {
        printf("invalid")
        return -1;
    }
    
    // for(int i=aPos;i<last;i++)
    // {
    //     pos[]=pos[];
    // }
    
    for(int i=(last-1);i>=aPos;i--)
    {
        aArray[i]=aArray[i-1];
    }
}


int main() {
    // Write C code here
    int array[MAXNUM]={1,2,3,4,5,6,7,8,9,10};
    
    last=10;
    
    printf("Try programiz.pro _%d",last);

    return 0;
}
