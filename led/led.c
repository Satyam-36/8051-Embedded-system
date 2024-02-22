#include<reg51.h>

void delay(unsigned int count)
{
  unsigned int i;
	while(count)
	{
		i=115;
		while(i>0)
		{
			i--;
			count--;
		}
	}
}

void main()
{

	
	while(1)
	{
      P2=0x00;
			delay(1000);
      P2=0x07;
			delay(1000);

		
	}
}