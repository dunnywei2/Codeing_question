
/*other people's solution*/
#include <stdio.h>

# define BUFFER SIZE 8

typedef struct {
uint8 t buffer[BUFFER SIZE];
int head;
int tail;
} CircularBuffer;

 void initBuffer(CircularBuffer * cb) {
	cb-> head =0;
	cb-> tail =0;
 }

void writeBuffer(CircularBuffer * cb, uint8 t data) {
	cb-> buffer[cb-> head] = data;
	cb-> head = (cb-> head +1) % BUFFER SIZE;
 }

uint8 t readBuffer(CircularBuffer * cb) {
	uint8 t data = cb-> buffer[cb-> tail];
	cb-> tail = (cb-> tail +1) % BUFFER SIZE;
	return data;
	}
