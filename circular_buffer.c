//https://www.youtube.com/watch?v=uvD9_Wdtjtw
/*other people's solution*/
#include <stdio.h>
#include <stdint.h>


/*other people's solution*/
#include <stdio.h>

#define BUFFER_SIZE 8

typedef struct {
uint8_t buffer[BUFFER_SIZE];
int head;
int tail;
uint8_t counter;
} CircularBuffer;


int isBufferEmpty(CircularBuffer * cb)
{
   if((cb->tail==cb->head)&&cb->counter==0))
   {
       return 1;
   }
   return 0;
}

int isBufferFull(CircularBuffer * cb)
{
   if((cb->tail==cb->head)&&(cb->counter==BUFFER_SIZE))
   {
       return 1;
   }
   return 0;
}

 void initBuffer(CircularBuffer * cb) {
	cb-> head =0;
	cb-> tail =0;
	cb->counter=0;
 }

void writeBuffer(CircularBuffer * cb, uint8_t data) {
   if(!isBufferFull(cb))
   {
	printf("adding data\n");
   	cb-> buffer[cb-> head] = data;
	cb-> head = (cb-> head +1) % BUFFER_SIZE;
	cb->counter++;
	return;
   }
   printf("buffer is full OR not in intial state\n");
   
   
 }

uint8_t readBuffer(CircularBuffer * cb) {
	if(isBufferEmpty(cb))
	{
		printf("buffer is empty\n");
		return -1;
	}
	uint8_t data = cb-> buffer[cb-> tail];
	cb-> tail = (cb-> tail +1) % BUFFER_SIZE;
	cb->counter--;
	printf("reading buffer\n");
	return data;
}

int main()
{
    CircularBuffer cBuffer;
    initBuffer(&cBuffer);
    printf("Hello World first\n");

    for(int i=0;i<2;i++)
       readBuffer(&cBuffer,i);	

    for(int i=0;i<BUFFER_SIZE+1;i++)
       writeBuffer(&cBuffer,i);	


    return 0;
}
