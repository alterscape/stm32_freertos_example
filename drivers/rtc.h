#ifndef RTC_H
#define RTC_H

/***************************************************************************//**
 * Declare function prototypes
 ******************************************************************************/
void RTC_Configuration(void);
void Time_Adjust(void);
void Time_Show(void);
char * Time_GetFormattedString(void);
void RTC_IRQHandler(void);

#endif