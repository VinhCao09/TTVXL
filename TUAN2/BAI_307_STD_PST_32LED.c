#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
unsigned int32 y,i;
void main()
{
set_up_port_ic_chot();
 y=0;
 while(true)
 {
 
         for(i=0;i<32;i++)
          { 
          xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
          delay_ms(200);
          y= (y<<1)+1;
          }
          for(i=0;i<32;i++)
          { 
          xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
          delay_ms(200); 
          y= (y<<1);
          }
 }
}

