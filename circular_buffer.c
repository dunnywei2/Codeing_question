
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

 void initBuffer(CircularBuffer * cb) {
	cb-> head =0;
	cb-> tail =0;
 }

void writeBuffer(CircularBuffer * cb, uint8_t data) {
	cb-> buffer[cb-> head] = data;
	cb-> head = (cb-> head +1) % BUFFER_SIZE;
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
    printf("Hello World");

    return 0;
}
