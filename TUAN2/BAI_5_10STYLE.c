#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
unsigned int32 y,i,k,run,save;
VOID KIEU1()
//!CHOP_TAT_2PORT_XENKE
{  I=0;
   WHILE(I<10)
   {
      xuat_32led_don_4byte(0XFF,0,0,0xFF);
      DELAY_MS(110);
      xuat_32led_don_4byte(0,0xFF,0xFF,0);
      DELAY_MS(110);
      I++;
   }
}
void KIEU2()
{
//!SANG_DICH_3LED_TSP
   for(i=0;i<=32;i++)
   { 
      y=0xE0000000>>i;
      xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
      delay_ms(50);
   }
} 
void KIEU3()
{
//!SANG_DICH_3LED_PST
   for(i=0;i<=32;i++)
   {
   y=0x00000007<<i;
   xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
   delay_ms(50);
   }
}
VOID KIEU4()
{       
//!CHOP_TAT
   y=0; i=0;
   while(i<10)
   {
      xuat_32led_don_4byte(y,y,y,y);
      delay_ms(200);
      y= ~y;
      i++;
   }

}
VOID KIEU5()
{
//! SANG DON 32LED
   save=0;
   for(k=0;k<32;k++)
   {
      run=0x00000001;
      for(i=k; i<32;i++)
      {
      y=run|save; 
      xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
      delay_ms(10);
      run=run<<1;
      }
      save=y;
   }
}
VOID KIEU6()
{
//! TAT DAN DON 32LED
   Y=0XFFFFFF; 
   xuat_32led_don_4byte(y>>24,y>>16,y>>8,y); DELAY_MS(100);
   Y=SAVE=0XFFFFFFFE;
   FOR(I=0;I<32;I++)
   {
      RUN=0X00000001<<I;
      FOR(K=0;K<I+1;K++)
         {
            RUN=RUN>>1;
            Y=RUN|SAVE;
            xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
            DELAY_MS(10);
         }
         SAVE=SAVE<<1;
    }
}
VOID KIEU7()
{
//!         Sang dan PST
          for(i=0;i<32;i++)
          { 
             xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
             delay_ms(30);
             y= (y<<1)+1;
          }
          //!          Tat dan PST
          for(i=0;i<32;i++)
          { 
             xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
             delay_ms(30); 
             y= (y<<1);
          }
}

VOID KIEU8()
{
//!          Sang dan TSP
          for(i=0;i<32;i++)
          { 
             xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
             delay_ms(30); 
             y= (y>>1)+0x80000000;
          }
          //!          Tat dan TSP
          for(i=0;i<32;i++)
          { 
             xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
             delay_ms(30); 
             y= (y>>1);
          }
}

VOID KIEU9()
{
//! DICH QUA LAI 1 LED
Y = 0x00;  //! TAT TAT CA LED BAN DAU
unsigned int8 dem=0;
    while (dem<2) {
        //! DICH SANG PHAI
        for (i = 0; i < 32; i++) {
        xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
            Y = 1 << i;
            delay_ms(50); 
        }

//!         DICH SANG TRAI
        for (i = 0; i < 32; i++) {
        xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
            Y = 0x80000000 >> i;
            delay_ms(50); 
        }
        DEM++;
    }
}
VOID KIEU10()
{ 
i=0; 
unsigned int x=200;
while(i<3){

  
 xuat_32led_don_4byte(0,0,0,0xff); delay_ms(x);
 xuat_32led_don_4byte(0,0,0xff,0); delay_ms(x);
 xuat_32led_don_4byte(0,0xff,0,0); delay_ms(x);
 xuat_32led_don_4byte(0xff,0,0,0); delay_ms(x);
 xuat_32led_don_4byte(0,0xff,0,0); delay_ms(x);
 xuat_32led_don_4byte(0,0,0xff,0); delay_ms(x);
   i++;
 }
}
void main()
{
   set_up_port_ic_chot();
   while(true)
   {
         KIEU1();
         KIEU2();
         KIEU3();
         KIEU4();
         KIEU5();
         KIEU6();
         KIEU7();
         KIEU8();
         KIEU9();
         KIEU10();
   }
}

