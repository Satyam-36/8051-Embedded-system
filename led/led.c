#include<reg51.h>

delay_ms(int time)
{
	int i,j;
	for(i=0;i<time;i++)
	for(j=0;j<1275;j++);
}

void main()
{
	while(1)
	{
		P2=1;
		delay_ms(100);
		P2=0;
		delay_ms(100);
		
	}
}