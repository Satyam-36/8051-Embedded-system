#include<reg51.h>

delay_ms(int time)
{
	int i,j;
	for(i=0;i<time;i++)
	for(j=0;j<1275;j++);
}

void main()
{
	char num[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
		int c;
	while(1)
	{
		for(c=0;c<10;c++)
		{
			P2=num[c];
			delay_ms(100);
		}
		
	}
}