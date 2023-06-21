#include "bsp_led.h"

/*

	OPEN GPIOD TIME EN
	
	SET GPIOMODE

	SET GPIO OUTPUT


*/
void led_gpio_config(void)
{

	rcu_periph_clock_enable(RCU_GPIOD);
	gpio_mode_set(GPIOD,GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,GPIO_PIN_7);
	gpio_output_options_set(GPIOD,GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,GPIO_PIN_7);
	

/*

	BSP_RCU_AHB1EN |=(0x00000008);
	
	BSP_GPIOD_CTL &=0xffff3fff;
	BSP_GPIOD_CTL |=0x00004000;

	BSP_GPIOD_PUD &= ~(0x03<<(2*7));
	BSP_GPIOD_OMODE &= ~(0x01<< 7);

	BSP_GPIOD_OSPD &= ~(0x03<<(2*7));
	BSP_GPIOD_OSPD |= (0x02<<(2*7));
*/
}
	
