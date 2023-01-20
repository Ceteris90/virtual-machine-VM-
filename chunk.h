#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"

/**
 * enum - function
 *
 * OP_RETURN : Operation to return
 * opCode : operation code
 */
typedef enum
{
	OP_RETURN,
} opCode;

/**
 * struct - function
 * uint8_t* code;
 * chunk
 */
typedef struct
{
	int count;
	int capacity;
	uint8_t *code;
} chunk;

void initChunk(Chunk *chunk);
void writeChunk(Chunk *chunk, uint8_t byte); 

#endif
