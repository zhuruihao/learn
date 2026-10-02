#include "stm32f10x.h"
#include "Delay.h"


int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	while(1)
	{
		//点灯
		//GPIO_Write(GPIOA, ~0x0001);
		//Delay_ms(100);
		//GPIO_Write(GPIOA, ~0x0002);
		//Delay_ms(500);
		//GPIO_Write(GPIOA, ~0x0004);
		//Delay_ms(50);
		//GPIO_Write(GPIOA, ~0x0008);
		//Delay_ms(200);
		//GPIO_Write(GPIOA, ~0x0010);
		//Delay_ms(1000);
		//GPIO_Write(GPIOA, ~0x0020);
		//Delay_ms(10);
		//GPIO_Write(GPIOA, ~0x0040);
		//Delay_ms(100);
		//GPIO_Write(GPIOA, ~0x0080);
		//Delay_ms(500);
		
		//蜂鸣器
		GPIO_ResetBits(GPIOB,GPIO_Pin_12);
		Delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
		Delay_ms(700);
		GPIO_ResetBits(GPIOB,GPIO_Pin_12);
		Delay_ms(50);
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
		Delay_ms(10);
	}
}
