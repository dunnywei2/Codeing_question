//https://www.youtube.com/watch?v=uvD9_Wdtjtw&t=5s

#include <stdio.h>

int full_flag=0U; //default as false

static int gLength=8;

int *l=NULL;
int *r=NULL;

int h_index=0;
int t_index=0;

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
   array[h_index]=value;
   h_index=(h_index+1)%gLength;
   printf("h_index is %d content %d\n\r",h_index,array[h_index]);
     
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
