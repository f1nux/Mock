#ifndef Communication_H
#define Communication_H
#include <stdint.h>

void writeData(uint8_t cmd, uint16_t address, uint8_t data);
uint8_t readData(uint8_t cmd, uint16_t address);

void sendBitHigh(int pinNo);
void sendbitLow(int pinNo);
uint8_t turnAroundIO(int pinNo);
uint32_t readBit(int pinNo);
void readTurnaroundIO(int pinNo);
void writeTurnaroundIO(int pinNo);

void writeData(uint8_t cmd, uint16_t address, uint8_t data);
uint8_t readData(uint8_t cmd, uint16_t address);









#endif // Communication_H
