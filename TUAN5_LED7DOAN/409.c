#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
signed int8 i,j;
void main()
{ 
   set_up_port_ic_chot(); 
    while(true)
    { 
       for (i=0;i<24;i++)
       { 
          for (j=0;j<60;j++)
          {
          xuat_4led_7doan_4so(ma7doan[i/10],ma7doan[i%10],ma7doan[j/10%10],ma7doan[j%10]);
          delay_ms(1000);
          }
       }
    }
}
