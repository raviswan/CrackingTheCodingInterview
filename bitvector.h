#include <iostream>

class BitVector
{
public:
	/*Create a bit vector with no. of bits to be tested = size*/
	BitVector(size_t size);
	/*set all bits in the bit vector*/
	void setBit();
	/*set bit at index in the bit vector*/
	void setBit(size_t index);
	/*unset all bits*/
	void unsetBit();
	/*unset bit at index in the bit vector*/
	void unsetBit(size_t index);
	/*Check whether bit is set or not*/
	bool isBitSet(size_t index);
	/*return length of bit vector*/
	size_t getBitVectorLength() const;
	void printByteArray() const;
	~BitVector();
private:
	/*Get the byte number where the index is located. For e.g. for index=19, 
	it will be byteArray[19/8]=byteArray[2]
	*/
	size_t getByteArrayNumber(size_t index);
	/*returns bit position of index. For index=19, we return a mask at 
	index 3 (i.e.19%8) of byteArray[2]
	*/
	size_t mask(size_t index);
	/*Actual byte array where each bit of each char byte represents a bit of the bit vector*/
	unsigned char* byteArray;
	/*No of bits that can be represented by this bit vector*/
	size_t byteArraySize;
};