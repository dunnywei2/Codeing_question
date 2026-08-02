static int full_flag=0U; //default as false
static int index=0U;

static int gLength=8;

int *l=NULL;
int *r=NULL;

int l_index=0;
int r_index=0;

int push(int value,int *array)
{
   int return_value=-1;
   if(full_flag==1) //full
   {
     return -1;
   }

   if(aIndex>=gLength)
   {
        full_flag=1;
        return -1;
   }
   
   l_index=(l_index+1)%gLength;
   printf("l_index is %d \n\r",l_index);
     
   return 0;
}

int main()
{
   int a[10];

   for(int i=0;i++;i<10)
      {
         push(i,a);
      }
}


