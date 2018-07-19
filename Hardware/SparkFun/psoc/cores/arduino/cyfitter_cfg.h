/*******************************************************************************
* FILENAME: cyfitter_cfg.h
* PSoC Creator  3.1 SP3
*
* Description:
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright 2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef CYFITTER_CFG_H
#define CYFITTER_CFG_H

#include <cytypes.h>

extern void cyfitter_cfg(void);

/* Analog Set/Unset methods */
extern void SetAnalogRoutingPumps(uint8 enabled);
extern void ADC_Mux_Set(uint8 channel);
extern void ADC_Mux_Unset(uint8 channel);


#endif /* CYFITTER_CFG_H */

/*[]*/