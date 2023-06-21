#include "bsp_led.h"

/*

	OPEN GPIOD TIME EN
	
	SET GPIOMODE

	SET GPIO OUTPUT


*/
void led_gpio_config(void)
{

	rcu_periph_clock_enable(RCU_LED);
	gpio_mode_set(PORT_LED,GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,PIN_LED);
	gpio_output_options_set(PORT_LED,GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,PIN_LED);

	rcu_periph_clock_enable(RCU_LED2);
	gpio_mode_set(PORT_LED2,GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,PIN_LED2);
	gpio_output_options_set(PORT_LED2,GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,PIN_LED2);

	rcu_periph_clock_enable(RCU_LED3);
	gpio_mode_set(PORT_LED3,GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,PIN_LED3);
	gpio_output_options_set(PORT_LED3,GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,PIN_LED3);

	rcu_periph_clock_enable(RCU_LED4);
	gpio_mode_set(PORT_LED4,GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,PIN_LED4);
	gpio_output_options_set(PORT_LED4,GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,PIN_LED4);



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
	
