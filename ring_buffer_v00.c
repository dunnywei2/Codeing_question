static int full_flag=0U; //default as false
static int index=0U;

static int gLength=0;

int *l=NULL;
int *r=NULL;

int write(int aIndex,int *array)
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
   l=array
   l++;
   return_value=0;
   
   
   return return_value;
}

