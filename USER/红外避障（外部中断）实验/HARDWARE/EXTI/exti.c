#include "exti.h"
#include "usart.h"
//�����ж�
void EXTI_Init(void)
{
	Ex_NVIC_Config(GPIO_B,0,FTIR); 		//����Ϊ�½��ش���
	MY_NVIC_Init(2,2,EXTI0_IRQn,2);    	//�����ж����ȼ�Ϊ����ռ2����Ӧ2����2
}

void EXTI0_IRQHandler(void)
{
	printf("warning!warning!warning!\r\n");
	EXTI->PR=1<<0;  //���LINE0�ϵ��жϱ�־λ  
}










