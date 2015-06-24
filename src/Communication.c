#include "Communication.h"
#include <stdio.h>
#include <signal.h>
#include<stdlib.h>
//#define IO_PIN  4
//#define CLK_PIN  5
void writeData(uint8_t cmd, uint16_t address, uint8_t data){
 int i;
  uint8_t cache,bit_bit;
  for (i=0;i<8;i++){
    cache=cmd>>i;
    cache=cache &0x01;
   if(bit_bit) sendBitHigh(IO_PIN);
    else sendbitLow(IO_PIN);
  }
  /*
  for (i=0;i<16;i++){
    cache=address>>i;
    cache=cache &0x1;
   if(bit_bit) sendBitHigh(IO_PIN);
    else sendbitLow(IO_PIN);
  }
  
  for (i=0;i<8;i++){
    cache=data>>i;
    cache=cache &0x1;
   if(bit_bit) sendBitHigh(IO_PIN);
    else sendbitLow(IO_PIN);
  }
  */
}


uint8_t readData(uint8_t cmd, uint16_t address){
  
  
  
  
  return 0;
}

void sendBitHigh(int pinNo){
  setPinHigh(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
}

void sendbitLow(int pinNo){
  setPinLow(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
}

uint32_t readBit(int pinNo){
  
  return 0;
}

uint8_t turnAroundIO(int pinNo){
  
  
  return 0;
}

/*
@brief Perform write_to_read turnaround.
@param pinNo is the pin to do turnaround
*/
void readTurnaroundIO(int pinNo){
  setPinToInput(IO_PIN);
  setPinToOutput(CLK_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
}

/*
@brief Perform read_to_write turnaround.
@param pinNo is the pin to do turnaround
*/
void writeTurnaroundIO(int pinNo){ 
    setPinToOutput(IO_PIN);
    setPinToOutput(CLK_PIN);
    setPinHigh(CLK_PIN);
    setPinLow(CLK_PIN);
}

