#include "spiADXL345.h"


// Function for initializing ADXL345 accelerometer in measure mode
void initSPIADXL345()
{
    DO_ADXL345_CS = 0;
    timer1Delay(100);
    DO_ADXL345_CS = 1;

    // Configure ADXL345: Enable Measurement Mode
//    ADXL345_WriteRegister(ADXL345_REG_BW_RATE, 0x0A);
    ADXL345_WriteRegister(ADXL345_REG_POWER_CTL, 0x08);
//    ADXL345_WriteRegister(ADXL345_REG_DATA_FORMAT, 0x08);
}

// Function for writing data in ADXL345 accelerometer 
void ADXL345_WriteRegister(uint8_t iRegAddress, uint8_t iValue)
{
    DO_ADXL345_CS = 0;              //ADXL345 Module Enabled
    SPI1_Write(iRegAddress);
    SPI1_Write(iValue);
    DO_ADXL345_CS = 1;              //ADXL345 Module Enabled
}


// Function for reading ADXL345 accelerometer data
uint8_t ADXL345_ReadRegister(uint8_t iRegAddress)
{
    uint8_t iValue = 0;
    DO_ADXL345_CS = 0;              //ADXL345 Module Enabled
    SPI1_Write(iRegAddress | 0x80); //Set MSB for read operation
    iValue = SPI1_Write(0x00);
    DO_ADXL345_CS = 1;              //ADXL345 Module Enabled

    return iValue;
}
