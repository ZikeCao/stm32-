#include "sys.h"   
#include "motor.h"	    
//LED IO��ʼ��
void Motor_Init(void)
{	
	RCC->APB2ENR |= 1<<2;
	RCC->APB2ENR |= 1<<5;
	GPIOA->CRH &= 0XFFFFFFF0;
  GPIOA->CRH |= 0X00000003;
	GPIOA->ODR |= 1<<8;
	
	RCC->APB2ENR|=1<<3;    //ʹ��PORTBʱ��	   	   	 
	GPIOB->CRL&=0XFFFFF00F; 
	GPIOB->CRL|=0X00000330;  	 
  GPIOB->ODR|=2<<1;      
}






