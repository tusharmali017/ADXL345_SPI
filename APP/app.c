#include "app.h"


//Global Variables
uint16_t buf[200] = {};
uint16_t X_out = 0, Y_out = 0, Z_out = 0;

void runApp()
{
    initSPIADXL345();

    while (1)
    {
        //Read ADXL345 Accelerometer Data through SPI Function
        X_out = (uint16_t) (ADXL345_ReadRegister(ADXL345_REG_DATAX0) | ADXL345_ReadRegister(ADXL345_REG_DATAX1) << 8);
        Y_out = (uint16_t) (ADXL345_ReadRegister(ADXL345_REG_DATAY0) | ADXL345_ReadRegister(ADXL345_REG_DATAY1) << 8);
        Z_out = (uint16_t) (ADXL345_ReadRegister(ADXL345_REG_DATAZ0) | ADXL345_ReadRegister(ADXL345_REG_DATAZ1) << 8);

        // Print Value
        sprintf(buf, "X axis: %d, Y axis: %d, Z axis: %d\r\n", X_out, Y_out, Z_out);
        
        UART1WriteString(buf);
    }
}


