/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  dio.h
 *       Module:  dio
 *
 *  Description:  dio APIs
 *
 *********************************************************************************************************************/
#ifndef DIO_H_H
#define DIO_H_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "../LIB/register.h"
#include "../LIB/bit_math.h"
#include "../LIB/std_types.h"
#include "../MCAL/DIO/dio_types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void dio_vidConfigChannel(dio_portId_t port, dio_channelId_t channel, dio_direction_t direction);
void dio_vidWriteChannel(dio_portId_t port, dio_channelId_t channel, dio_level_t level);
void dio_vidWriteChannelGroup(dio_portId_t port, u8 value, u8 mask);
void dio_vidFlipChannel(dio_portId_t port, dio_channelId_t channel);
dio_level_t dio_dioLevelReadChannel(dio_portId_t port, dio_channelId_t channel);
void dio_vidEnablePullUp(dio_portId_t port, dio_channelId_t channel);

#endif /* DIO_H_H */

/**********************************************************************************************************************
 *  END OF FILE: dio.h
 *********************************************************************************************************************/
