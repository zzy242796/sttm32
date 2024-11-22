#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	//RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	//GPIO_Init(GPIOC, &GPIO_InitStructure);
	
	
	while (1)
	{
		GPIO_SetBits(GPIOA, GPIO_Pin_1);
		Delay_ms(500);
		GPIO_ResetBits(GPIOA, GPIO_Pin_1);
		Delay_ms(500);
		
//		GPIO_WriteBit(GPIOB, GPIO_Pin_9, Bit_RESET);
//		Delay_ms(100);
//		GPIO_WriteBit(GPIOB, GPIO_Pin_9, Bit_SET);
//		Delay_ms(100);
//		
		//GPIO_WriteBit(GPIOB, GPIO_Pin_5, (BitAction)0);
		//Delay_ms(100);
		//GPIO_WriteBit(GPIOB, GPIO_Pin_5, (BitAction)1);
		//Delay_ms(100);
	}
}
