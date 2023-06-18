#include "bsp_led.h"

/*

	OPEN GPIOD TIME EN
	
	SET GPIOMODE

	SET GPIO OUTPUT


*/
void led_gpio_config(void)
{

	BSP_RCU_AHB1EN |=(0x00000008);
	
	BSP_GPIOD_CTL &=0xffff3fff;
	BSP_GPIOD_CTL |=0x00004000;

	BSP_GPIOD_PUD &= ~(0x03<<(2*7));
	BSP_GPIOD_OMODE &= ~(0x01<< 7);

	BSP_GPIOD_OSPD &= ~(0x03<<(2*7));
	BSP_GPIOD_OSPD |= (0x02<<(2*7));

}
	
