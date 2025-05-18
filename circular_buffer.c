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
} CircularBuffer;

int isBufferFull(CircularBuffer * cb)
{
   if(cb->tail==cb->head)
   {
       return 1;
   }
   return 0;
}

 void initBuffer(CircularBuffer * cb) {
	cb-> head =0;
	cb-> tail =0;
 }

void writeBuffer(CircularBuffer * cb, uint8_t data) {
   if((!isBufferFull(cb))||((cb->tail==0)&&(cb->head==0)))
   {
	printf("adding data\n");
   	cb-> buffer[cb-> head] = data;
	cb-> head = (cb-> head +1) % BUFFER_SIZE;
	return;
   }
   printf("buffer is full OR not in intial state\n");
   
   
 }

uint8_t readBuffer(CircularBuffer * cb) {
	uint8_t data = cb-> buffer[cb-> tail];
	cb-> tail = (cb-> tail +1) % BUFFER_SIZE;
	return data;
	}

int main()
{
    CircularBuffer cBuffer;
    initBuffer(&cBuffer);
    printf("Hello World first\n");

    writeBuffer(&cBuffer,1);	


    return 0;
}
