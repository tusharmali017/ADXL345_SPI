/* 
 * File:   accelerometer.h
 * Author: tushar.mali
 *
 * Created on 21 February, 2024, 12:53 PM
 */

#ifndef ACCELEROMETER_H
#define	ACCELEROMETER_H

#include "../BIOS/bios.h"

// ADXL345 Register Addresses
#define ADXL345_REG_BW_RATE     0x2C
#define ADXL345_REG_POWER_CTL   0x2D
#define ADXL345_REG_DATA_FORMAT 0x31
#define ADXL345_REG_DATAX0      0x32
#define ADXL345_REG_DATAX1      0x33
#define ADXL345_REG_DATAY0      0x34
#define ADXL345_REG_DATAY1      0x35
#define ADXL345_REG_DATAZ0      0x36
#define ADXL345_REG_DATAZ1      0x37


#ifdef	__cplusplus
extern "C" {
#endif

    void initSPIADXL345();
    void ADXL345_WriteRegister(uint8_t iRegAddress, uint8_t iValue);
    uint8_t ADXL345_ReadRegister(uint8_t iRegAddress);

#ifdef	__cplusplus
}
#endif

#endif	/* ACCELEROMETER_H */

