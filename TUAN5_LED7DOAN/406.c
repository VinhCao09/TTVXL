#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
signed int8 i;
void main()
{ 
   set_up_port_ic_chot(); 
   while(true)
       { 
       goto demlen;

       demlen: 
          for (i=0;i<60;i++)
          { 
            xuat_4led_7doan_4so(0xff,0xff,ma7doan[i/10],ma7doan[i%10]);
            delay_ms(200);
            if (i==59) {
            delay_ms(3000);
            goto demxuong;
            }
          };
       demxuong:
         for (i=59;i>=0;i--)
          { 
            xuat_4led_7doan_4so(0xff,0xff,ma7doan[i/10],ma7doan[i%10]);
            delay_ms(200);
            if (i==0){ 
            delay_ms(3000);
            goto demlen;
            }
          };
          
       }
}

