#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
signed int16 i;
void main()
{ 
   set_up_port_ic_chot(); 
    while(true)
    { 
       for (i=0;i<1000;i++)
       { 
       xuat_4led_7doan_4so(0xff,ma7doan[i/100],ma7doan[i/10%10],ma7doan[i%10]);
       delay_ms(50);
       }
    }
}
