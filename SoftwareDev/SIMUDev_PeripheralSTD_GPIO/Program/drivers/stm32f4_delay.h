/**
  *      __            ____
  *     / /__ _  __   / __/                      __  
  *    / //_/(_)/ /_ / /  ___   ____ ___  __ __ / /_ 
  *   / ,<  / // __/_\ \ / _ \ / __// _ \/ // // __/ 
  *  /_/|_|/_/ \__//___// .__//_/   \___/\_,_/ \__/  
  *                    /_/   github.com/KitSprout    
  * 
  * @file    stm32f4_delay.h
  * @author  KitSprout
  * @date    6-Oct-2016
  * @brief   
  * 
  */

/* Define to prevent recursive inclusion ---------------------------------------------------*/
#ifndef __STM32F4_DELAY_H
#define __STM32F4_DELAY_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes --------------------------------------------------------------------------------*/
#include "stm32f4xx.h"

/* Exported types --------------------------------------------------------------------------*/
/* Exported constants ----------------------------------------------------------------------*/
#define delay_ms(__ms)    HAL_Delay(__ms)

/* Exported functions ----------------------------------------------------------------------*/  
void     HAL_InitTick( void );
void     HAL_IncTick( void );
uint32_t HAL_GetTick( void );
void     HAL_Delay( __IO uint32_t Delay );

void     delay_us( __IO uint32_t vCnt_us );

#ifdef __cplusplus
}
#endif

#endif

/*************************************** END OF FILE ****************************************/
