/* 
 * File:   app.h
 * Author: tushar.mali
 *
 * Created on 21 February, 2024, 12:41 PM
 */

#ifndef APP_H
#define	APP_H

#include "../BIOS/bios.h"
#include "spiADXL345.h"

#define SCALE_FACTOR 1000
#define ACC_SCALE 256
#define RAD_TO_DEG_SCALE 57296      //(180/3.14 * 1000)

#ifdef	__cplusplus
extern "C" {
#endif


void runApp();


#ifdef	__cplusplus
}
#endif

#endif	/* APP_H */

