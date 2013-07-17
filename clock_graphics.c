#include "clock_graphics.h"

#include <stdint.h>
#include "lcd.h"
#include "rtc.h"
#include "helvetica_neue_36_clock.h"

void clock_print_char_xy(int xPos, int yPos, char character, FONT_INFO* fontInfo, uint16_t fgColor, uint16_t bgColor);

void vClockGraphicsTask( void *pvParameters ) 
{
	printf("Graphics start\r\n");
	
	lcd_clear(0);
	for( ;; )
	{
		lcd_lock();
		//
		//lcd_fill(160, 0, 320, 16, 0x000000);
		//lcd_clear(0);
   		char* timeString = Time_GetFormattedString();
    	//lcd_printf(10, 0, 10, "%s", timeString);
    	lcd_font_printf(2, 2, 10, &helveticaNeue_36ptFontInfo, "%s", timeString);
    	vPortFree(timeString);
		lcd_release();
		vTaskDelay( 1000 );
	}
}