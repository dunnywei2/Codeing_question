//https://www.youtube.com/watch?v=uvD9_Wdtjtw&t=5s

#include <stdio.h>

int full_flag=0; //default as false
int empty_flage=0;//default as false

static int gLength=8;

int *l=NULL;
int *r=NULL;

int h_index=0;
int t_index=0;

int isEmpty()
{
   if((h_index==t_index)&&(full_flag==0)) //MOST importa part
   {
      return 1;
   }
      return 0;
}

int push(int value,int *array)
{
   if(full_flag==1) //full
   {
     printf("Buffer is full\n");
     return -1;
   }
   else if(h_index==t_index)
   {
      full_flag=1;
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

int pop(int *array)
{
   int r_value=-1;
   printf("t_index before %d content %d\r\n",t_index,array[t_index]);

   if(isEmpty()==1)
   {
      prtinf("buffer is empty\n);
      return r_value;
   }
   
   r_value=array[t_index];
   array[t_index]=-100;
   t_index++;
   printf("t_index before %d content %d\r\n",t_index,r_value);

   full_flag=0;

   return r_value;
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
