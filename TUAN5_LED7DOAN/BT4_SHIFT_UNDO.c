#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
//!#include <D:\TTVXL_TH\TV_KIT_KEYPAD_BO138.c>
#include <D:\TTVXL_TH\tv_pickit2_shift_key4x4_138.c>
unsigned int16 k,i,temp;
unsigned int16 mp;
unsigned int8 DL_4L7D[4]={0xff,0xff,0xff,0xff};
unsigned int8 stored_data[8]={0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};
void SHIFT_AND_UNDO()
{
   if(mp<10)
   {
      for (i=0;i<7;i++) stored_data[i]=stored_data[i+1]; 
      stored_data[7]=ma7doan[mp];
      for (k=0;k<4;k++) DL_4L7D[K]=stored_data[4+k];
      xuat_4led_7doan_4so(DL_4L7D[0],DL_4L7D[1],DL_4L7D[2],DL_4L7D[3]);
   }
   else if (mp==10)
   {
      for (i=7;i>0;i--) stored_data[i]=stored_data[i-1];
      stored_data[0]=0xff;
      for (k=0;k<4;k++) DL_4L7D[K]=stored_data[4+k];
       xuat_4led_7doan_4so(DL_4L7D[0],DL_4L7D[1],DL_4L7D[2],DL_4L7D[3]);
   }
}


void main()
{

   set_up_port_ic_chot();
  
      while (true)
      {
      mp=key_4x4_dw();
      SHIFT_AND_UNDO();
      

      }
      
         
      
      
}


