/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int full_flag=0U; //default as false

static int gLength=8;

int *l=NULL;
int *r=NULL;

int l_index=0;
int r_index=0;

int push(int value,int *array)
{
   if(full_flag==1) //full
   {
     return -1;
   }
//   printf("here 1 \n");

//   if(aIndex>=gLength)
//   {
//         full_flag=1;
//         return -1;
//   }
   array[l_index]=value;
   l_index=(l_index+1)%gLength;
   printf("l_index is %d content %d\n\r",l_index,array[l_index]);
     
   return 0;
}

int main()
{
   int a[10];

   for(int i=0;i<10;i++)
      {
        printf("i %d \n",i);
        push(i,a);
      }
}
