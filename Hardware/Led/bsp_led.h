#ifndef _BSP_LED_H
#define _BSP_LED_H

#include "gd32f4xx.h"
#include "systick.h"


#define BSP_RCU_BASE (unsigned int)0x40023800U
#define BSP_RCU_AHB1EN *(unsigned int*)(BSP_RCU_BASE + 0x30U)

#define BSP_GPIOD_BASE (unsigned int)0x40020c00U
#define BSP_GPIOD_CTL *(unsigned int *)(BSP_GPIOD_BASE + 0x00U)

#define BSP_GPIOD_PUD *(unsigned int *)(BSP_GPIOD_BASE +0x0cU)
#define BSP_GPIOD_OMODE *(unsigned int *)(BSP_GPIOD_BASE +0x04U)

#define BSP_GPIOD_OSPD *(unsigned int *)(BSP_GPIOD_BASE + 0x08U)

#define BSP_GPIOD_OCTL *(unsigned int *)(BSP_GPIOD_BASE + 0x14U)

#define RCU_LED RCU_GPIOE
#define PORT_LED GPIOE
#define PIN_LED GPIO_PIN_3

#define RCU_LED2 RCU_GPIOD
#define PORT_LED2 GPIOD
#define PIN_LED2 GPIO_PIN_7

#define RCU_LED3 RCU_GPIOG
#define PORT_LED3 GPIOG
#define PIN_LED3 GPIO_PIN_3

#define RCU_LED4 RCU_GPIOA
#define PORT_LED4 GPIOA
#define PIN_LED4 GPIO_PIN_5

void led_gpio_config(void);




#endif
	
