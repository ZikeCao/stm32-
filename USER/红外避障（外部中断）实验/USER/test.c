#include "sys.h"
#include "usart.h"		
#include "ir_sensor.h"
#include "exti.h"
int main(void)
{			
	Stm32_Clock_Init(9);//ϵͳʱ������
	uart_init(72,9600); //���ڳ�ʼ�� 
	ir_sensor_init();
	EXTI_Init();		//�ⲿ�жϳ�ʼ��
	while(1)
	{	      
	}
}














