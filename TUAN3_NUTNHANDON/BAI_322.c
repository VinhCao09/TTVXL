#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
unsigned int8 y;
unsigned int1 trangthai;
void main()
{ 
 set_up_port_ic_chot(); 
 set_tris_b(0x3c);
 y=0; 
 xuat_32led_don_4byte(0,0,0,0);
 trangthai=0;
       while(true)
       { 
         if(input(on)==0)
         {
         y=0x0f;
         xuat_32led_don_4byte(0,0,0,y);
         trangthai=1;   
            

            
         }
         if (input(inv)==0&&(trangthai==1))
         {
           y=~y; 
           xuat_32led_don_4byte(0,0,0,y);
         }
         if(input(off)==0) 
         { 
            xuat_32led_don_4byte(0,0,0,0);
            trangthai=0;
         }
         
       }
}
