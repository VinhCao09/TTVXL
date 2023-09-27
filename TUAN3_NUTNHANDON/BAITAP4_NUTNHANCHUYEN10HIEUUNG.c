#include <D:\TTVXL_TH\tv_pickit2_shift_1.c>
unsigned int16 MODE=1;
unsigned int32 y,i,k,run,save;
void UP_BUTTON()
{
   if (input(UP)==0)
   { 
       delay_ms(20);
       {
         if (input(UP)==0)
         {
         MODE++;
         IF (MODE==10) MODE=1;
         while(!input(UP));
         }
       }
   }
}
void DW_BUTTON()
{
   if (input(DW)==0)
   { 
       delay_ms(20);
       {
         if (input(DW)==0)
         {
         MODE--;
         IF (MODE==0) MODE=10;
         while(!input(DW));
    
         }
       }
   }
}
VOID CLR_BUTTON()
{
   if(input(CLR)==0) MODE=1;
}
VOID KIEU1()
//!CHOP_TAT_2PORT_XENKE
{  I=0;
   WHILE(I<10)
   {  
         UP_BUTTON();
         DW_BUTTON();
         CLR_BUTTON();
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
            UP_BUTTON();
         DW_BUTTON();
         CLR_BUTTON();
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
            UP_BUTTON();
         DW_BUTTON();
         CLR_BUTTON();
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
   {           UP_BUTTON();
         DW_BUTTON();
         CLR_BUTTON();
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
               UP_BUTTON();
         DW_BUTTON();
         CLR_BUTTON();
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
         UP_BUTTON();
         DW_BUTTON();
         CLR_BUTTON();
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
         UP_BUTTON();
         DW_BUTTON();
         CLR_BUTTON();
          }
          //!          Tat dan PST
          for(i=0;i<32;i++)
          { 
             xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
             delay_ms(30); 
             y= (y<<1);
            UP_BUTTON();
            DW_BUTTON();
            CLR_BUTTON();
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
         UP_BUTTON();
         DW_BUTTON();
         CLR_BUTTON();
          }
          //!          Tat dan TSP
          for(i=0;i<32;i++)
          { 
             xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
             delay_ms(30); 
             y= (y>>1);
          UP_BUTTON();
         DW_BUTTON();
         CLR_BUTTON();
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
            UP_BUTTON();
         DW_BUTTON();
         CLR_BUTTON();
        }

//!         DICH SANG TRAI
        for (i = 0; i < 32; i++) {
        xuat_32led_don_4byte(y>>24,y>>16,y>>8,y);
            Y = 0x80000000 >> i;
            delay_ms(50); 
         UP_BUTTON();
         DW_BUTTON();
         CLR_BUTTON();
        }
        DEM++;
    }
}
VOID KIEU10()
{ 
i=0; 
unsigned int x=200;
while(i<3){

           UP_BUTTON();
         DW_BUTTON();
         CLR_BUTTON();
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
       set_tris_b(0x3c);
        
   
       while(true)
       { 
         UP_BUTTON();
         DW_BUTTON();
         CLR_BUTTON();
switch (MODE)
{
   case 1:
            KIEU1();
            break;
   case 2:
            KIEU2();
            break;
   case 3:
            KIEU3();
            break;  

   case 4:
            KIEU4();
            break;  
   case 5:
            KIEU5();
            break;  
   case 6:
            KIEU6();
            break;  
   case 7:
            KIEU7();
            break;  
   case 8:
            KIEU8();
            break;  
   case 9:
            KIEU9();
            break;  
   case 10:
            KIEU10();
            break;  







   default:
     // default statements
}

       }
}
