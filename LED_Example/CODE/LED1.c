#include<lpc214x.h>
void delay();
int main()
{
    IO0DIR |=0XfffffFFF;              //Port 0 is now acting as a output pin
    while(1) {
        IOSET0 |=0XfffffFFF;      //Port 0's all pins are high now (LED is glowing)
        delay();
        IOCLR0 |=0XFFFfffff;      //Port 0's all pins are low now (LED is OFF)
        delay();
    }   
		return 0;
}       
        
void delay()
{
    unsigned int i;
    for(i=0;i<30000;i++);
}