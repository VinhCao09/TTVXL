#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
//!#include <D:\TTVXL_TH\TV_KIT_KEYPAD_BO138.c>
#include <D:\TTVXL_TH\tv_pickit2_shift_key4x4_138.c>
unsigned int16 y, led_tam,mp;
void main()
{

   set_up_port_ic_chot();
   set_tris_b(0x3c);
   y=0;

   while (true)
   {
      mp=key_4x4_dw();
      
      if (mp!=0xff)
      {
         led_tam=0x0001;
         led_tam=led_tam<<mp;
         y=y^led_tam; //xor
         xuat_32led_don_4byte(0,0,y>>8,y);
           
      }
   }
}


