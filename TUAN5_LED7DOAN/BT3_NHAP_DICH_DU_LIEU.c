#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
//!#include <D:\TTVXL_TH\TV_KIT_KEYPAD_BO138.c>
#include <D:\TTVXL_TH\tv_pickit2_shift_key4x4_138.c>
unsigned int16 k,i,temp;
unsigned int16 mp;
unsigned int8 led[4]={0,0,0,0};

//!void KIEMTRA_BANPHIM4X4()
//!{
//!mp=key_4x4_dw();
//!if (mp==0) PHIM=0;
//!if (mp==1) PHIM=1;
//!if (mp==2) PHIM=2;
//!if (mp==3) PHIM=3;
//!if (mp==4) PHIM=4;
//!if (mp==5) PHIM=5;
//!if (mp==6) PHIM=6;
//!if (mp==7) PHIM=7;
//!if (mp==8) PHIM=8;
//!if (mp==9) PHIM=9;
//!if (mp==10) PHIM=10;
//!}
void SHIFT()
{
   if(mp!=0xff)
   {
      if(mp<10)
      {
      led[3]=led[2];
      led[2]=led[1];
      led[1]=led[0];
      led[0]=mp;
      xuat_4led_7doan_4so(ma7doan[led[3]],ma7doan[led[2]],ma7doan[led[1]],ma7doan[led[0]]);
      }
   }
}
void ARRANGE()
{
   if(mp==10)
   {
      for(k=0;k<3;k++)
      {
         for(i=k+1;i<4;i++)
         {
            if(led[k]<led[i])
            {
            temp=led[k];
            led[k]=led[i];
            led[i]=temp;
            }
         }
      }
   }
   xuat_4led_7doan_4so(ma7doan[led[3]],ma7doan[led[2]],ma7doan[led[1]],ma7doan[led[0]]);
}



void main()
{

   set_up_port_ic_chot();
   set_tris_b(0x3c);
   xuat_4led_7doan_4so(ma7doan[led[3]],ma7doan[led[2]],ma7doan[led[1]],ma7doan[led[0]]);
      while (true)
      {
      mp=key_4x4_dw();
      SHIFT();
      ARRANGE();

      }
      
         
      
      
}


