#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
unsigned int8 y;
unsigned int1 TRANGTHAI=0;
void phim_inv()
{
   if (input(inv)==0)
   { 
       delay_ms(20);
       {
         if (input(inv)==0)
       {
               if(TRANGTHAI==1) //KIEM TRA NUT ON DA BAT CHUA
               {
               y=~y;
               xuat_32led_don_4byte(0,0,0,y);
               }
               while(!input(inv));
            
            
       }
       }
   }
}
void main()
{ 
       set_up_port_ic_chot(); 
       set_tris_b(0x3c);
       y=0x00; 
       xuat_32led_don_4byte(0,0,0,0);
       while(true)
       { 
          
          if(input(on)==0)
          {
          TRANGTHAI=1;
          y=0x0f;
          xuat_32led_don_4byte(0,0,0,y);
          }
          phim_inv(); //KIEM TRA INV
          if(input(off)==0) 
            {
            TRANGTHAI=0;
            xuat_32led_don_4byte(0,0,0,0);
            }
       }
}
