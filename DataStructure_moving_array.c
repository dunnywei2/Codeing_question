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
    for(int i=(last-1);i>=aPos;i--)
    {
        if(i==aPos)
        {
            aArray[i]=aValue;
        }
        else{
           aArray[i]=aArray[i-1];
        }
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

/*Qlist
 page A:#937,#200,#1192,#1,#146,#973,#819#138,#5,#994,#42,#23,#763
 Page B:#2, #20, #21,#127, #295,#297, #692, #572, #240, #126, #472, #642
 
 Page C:
 *
 */
