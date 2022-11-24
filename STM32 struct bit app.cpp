
#include "stm32f10x.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "misc.h"
#include <string.h>
#include <stdio.h> 

#define LED_ONOFF();  GPIOC->ODR ^= GPIO_Pin_13; 
    	
void ds_read_data(void);

struct byte {
    unsigned flag_0: 1; 
    unsigned flag_1: 1; 
    unsigned flag_2: 1; 
    unsigned flag_3: 1;
    unsigned flag_4: 1;
    unsigned flag_5: 1;
    unsigned flag_6: 1;
    unsigned flag_7: 1;
};
struct byte bit = {0, 0, 0, 0, 0, 0, 0, 0};	



int	 read_ds18b20_interval ;
int	 read_K300_interval    ;
int  send_data_interval    ;

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//===============================TIM4_IRQHandler=================================//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
void TIM4_IRQHandler(void)
{       
        if (TIM_GetITStatus(TIM4, TIM_IT_Update) != RESET)
        {
			      LED_ONOFF();	
                  TIM_ClearITPendingBit(TIM4, TIM_IT_Update);
				  read_ds18b20_interval++;
				  read_K300_interval++;
				  send_data_interval++;
				  
					if(read_ds18b20_interval>60)//sn
					{
					   bit.flag_0=1; // flag Bit0 
					   read_ds18b20_interval = 0;
					}
					if(read_K300_interval>60)//60sn
					{
					   bit.flag_1=1; // flag Bit1	
					   read_K300_interval = 0;
					}
					if(send_data_interval>60*6)
					{   
						 bit.flag_2=1; // flag Bit2	
					   send_data_interval = 0;
					}
					
        }
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//=================================board_led_ini=================================//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
void board_led_ini(void){
  GPIO_InitTypeDef  GPIO_InitStructure;
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOC, &GPIO_InitStructure);
  GPIO_SetBits(GPIOC, GPIO_Pin_13); 
}


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
//=====================================main======================================//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
int main(void) 
{
	clock_setup();

	timer4_ini();//1 sn  interrupt
    while (1) 
	  {
			
			if(bit.flag_0)
			{ 
				ds_read_data();	
				bit.flag_0=0;
			}
			if(bit.flag_1)
			{ 
				volume=read_K300();
				bit.flag_1=0;
			}
			if(bit.flag_2)
			{ 
				 bit.flag_2=0;
				 if(volume)
				 send_uart(temp,volume);
			}
			

	  }
			   
	}
     
