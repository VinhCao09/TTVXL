#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
unsigned int32 y;
unsigned int16 k,i,run,save;

void main()
{
set_up_port_ic_chot();
 y=0;
 while(true)
 {
   save=0;
   for(k=0;k<16;k++)
   {
      run=0x0001;
      for(i=k; i<16;i++)
         {
         y=run|save;
         xuat_32led_don_4byte(0,0,y>>8,y);
         delay_ms(50);
         run=run<<1;
         }
      save=y;
   }

 }
}

