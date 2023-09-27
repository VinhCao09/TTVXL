#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
unsigned int32 y,i,k,run,save;
void XUATLED()
{
xuat_32led_don_4byte(0,0,y>>8,y);
}
void main()
{
set_up_port_ic_chot();
 y=0;
 while(true)
 {
//! TAT DAN DON 16LED
  Y=0XFFFF; 
  XUATLED(); DELAY_MS(100);
   Y=SAVE=0XFFFE;
   FOR(I=0;I<16;I++)
   {
      RUN=0X0001<<I;
      FOR(K=0;K<I+1;K++)
         {
            RUN=RUN>>1;
            Y=RUN|SAVE;
            XUATLED();
            DELAY_MS(100);
         }
         SAVE=SAVE<<1;
    }
         
   
 }
}

