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

void display(int* aArray)
{
    for(int i=0;i<10;i++)
    {
       printf("pos %d content %d \n",i,aArray[i]);
        
    }
}


int main() {
    // Write C code here
    int array[MAXNUM]={1,2,3,4,5,6,7,8,9,10};
    
    last=10;
    display(array);

    printf("Try programiz.pro _%d",last);
    
    insert(0,array,0);
    display(array);
    

    return 0;
}
