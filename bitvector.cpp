#include "bitvector.h"

BitVector::BitVector(size_t size){
	byteArraySize = (7+size)/8;
	byteArray = new unsigned char[byteArraySize];
	if(byteArray==NULL)
		exit(EXIT_FAILURE);
}

BitVector::~BitVector(){
}

size_t BitVector::getBitVectorLength() const{
	return byteArraySize;
}

void BitVector::setBit(){
	int i=0;
	while(i<byteArraySize){
		byteArray[i] = 0xFF;
		i++;
	}
}

void BitVector::setBit(size_t index){
	byteArray[getByteArrayNumber(index)] |= mask(index);
}

void BitVector::unsetBit(){
	int i=0;
	while(i<byteArraySize){
		byteArray[i] = 0x00;
		i++;
	}
}

void BitVector::unsetBit(size_t index){
	if(index >= byteArraySize)
		exit(EXIT_FAILURE);
	size_t bIndex = getByteArrayNumber(index);
	byteArray[bIndex] &= ~mask(index);
}

/*Check whether bit is set or not*/
bool BitVector::isBitSet(size_t index){
	return 0 != (byteArray[getByteArrayNumber(index)] & mask(index));
}

/*Check whether bit is set or not*/
void BitVector::printByteArray() const{
	int i=0;
	while(i<byteArraySize){
		printf("byteArray[%d]=%x\n",i,byteArray[i]);
		i++;
	}
}

size_t BitVector::getByteArrayNumber(size_t index){
	index = index >> 3;
	if(index >= byteArraySize)
		exit(EXIT_FAILURE);
	return index;
}

size_t BitVector::mask(size_t index){
	unsigned char maskVal = index & 0x7;
	return (1<<maskVal);
}

