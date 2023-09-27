#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
signed int8 i;
void main()
{ 
    set_up_port_ic_chot(); 
       while(true)
       { 
          for (i=0;i<10;i++)
          { 
          xuat_4led_7doan_4so(0xff,0xff,0xff,ma7doan[i]);
          delay_ms(500);
          } 
    }
}

