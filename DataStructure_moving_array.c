/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define MAXNUM 10U
int last=0;


int insert(int aPos, int* aArray,int aValue)
{
    
    if(aPos>=last)
    {
        printf("invalid");
        return -1;
    }
    
    // for(int i=aPos;i<last;i++)
    // {
    //     pos[]=pos[];
    // }
    
    for(int i=(last-1);i>=aPos;i--)
    {
        if(i==aPos)
        {
            aArray[i]=aValue;
        }
        else{
           aArray[i]=aArray[i-1];
        }
        
        //i==9, aPos=8,array[9]=array[8]
        //i==8, aPos=8,array[8]=0
    }
    return 0;
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

    printf("Try programiz.pro _%d \n",last);
    
    insert(8,array,0);
    display(array);
    

    return 0;
}
