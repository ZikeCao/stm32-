#include "sys.h"	
#include "motor.h"   
#include "timer.h" 
int main(void)
{			   
	Stm32_Clock_Init(9); //ϵͳʱ������
	delay_init(72);	     //��ʱ��ʼ��
	Motor_Init();		  	 //��ʼ����LED���ӵ�Ӳ���ӿ�
	TIM1_PWM_Init(899,0);//����Ƶ��PWMƵ��=72000/(899+1)=80Khz 
	MOTORA_PWM_VAL = 0;	
  while(1)
	{
	} 
}














