#include "unity.h"
#include "Communication.h"
#include <stdint.h>
#include "mock_Signal.h"

void setUp(void){}
void tearDown(void){}
void xtest_module_generator_needs_to_be_implemented(void){
	TEST_IGNORE_MESSAGE("Implement me!");
}

void test_sendBitHigh(){
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  
  sendBitHigh(IO_PIN);
}

void test_sendBitLow(){
  setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  
  sendbitLow(IO_PIN);
}

void test_writeTurnaroundIO(){
    setPinToOutput_Expect(IO_PIN);
    setPinToOutput_Expect(CLK_PIN);
    setPinHigh_Expect(CLK_PIN);
    setPinLow_Expect(CLK_PIN);
  
  writeTurnaroundIO(IO_PIN);
}

void test_readTurnaroundIO(){
  setPinToInput_Expect(IO_PIN);
  setPinToOutput_Expect(CLK_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);

  readTurnaroundIO(IO_PIN);
}

void test_readBit(){
  
  
  
}

/*
cmd 0xCD
addr 0xDE 0xAD
data 0xC0
*/
void test_writedata_given_0xCD_addr_0xDEAD_data0xC0_should_sent_0xCDDEADC0(){
  writeData(0xCD,0xDEAD,0xC0);
  
   int i;
  uint8_t cache,bit_bit;
  for (i=0;i<8;i++){
    cache=0xCD>>i;
    cache=cache &0x01;
   if(bit_bit) { setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);}
    else 
    { setPinLow_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);}
  
  }
  
}

void test_readdata_given_0xAB_addr_0xFACE_data0xBE_should_sent_0xABFACEBE(){
  

  
}