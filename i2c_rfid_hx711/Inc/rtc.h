#ifndef _RTC_H
#define _RTC_H
#include "main.h"

extern  RTC_HandleTypeDef hrtc;
extern	RTC_AlarmTypeDef sAlarm;
extern	RTC_DateTypeDef GetData;  //获取日期结构体
extern	RTC_TimeTypeDef GetTime;   //获取时间结构体
	
	void MX_RTC_Init(void);
#endif

/*
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};//
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE|RCC_OSCILLATORTYPE_LSE;
  RCC_OscInitStruct.LSEState = RCC_LSE_ON;
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_RTC;
  PeriphClkInit.RTCClockSelection = RCC_RTCCLKSOURCE_LSE;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    Error_Handler();
  }
*/