/*
**
**                           Main.c
**
**
**********************************************************************/
/*
   Last committed:     $Revision: 00 $
   Last changed by:    $Author: $
   Last changed date:  $Date:  $
   ID:                 $Id:  $

**********************************************************************/
#include "stm32f4xx_conf.h"

#include "stm32f4xx.h"
#include "fm_stm32f4_led.h"
#include "fm_stm32f4_delay.h"

int main(void)
{
    // initialize the system frequency
    SystemInit();
    // Delay initialize
    delay_init();
    // all LED initialize
    FM_Led_Init();
  while(1)
  {
    // Toggle all LED
       FM_Led_Toggle(LED_GREEN);
       FM_Led_Toggle(LED_ORANGE);
       FM_Led_Toggle(LED_RED);
       FM_Led_Toggle(LED_BLUE);
       // Delay for 1sec
       delay_ms(1000);
  }
}
